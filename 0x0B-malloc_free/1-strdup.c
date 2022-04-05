#include <stdlib.h>

/**
 * _strdup - the function that print char in specific number.
 * @s: the size to print.
 *
 * Return: char.
 */

char * _strdup(const char *s)
{
	char *src;
	int len = 0, i = 0;

	if (s == NULL)
		return (NULL);
	while (s[len])
		len++;
	src = malloc((len + 1) * sizeof(char));
	if (src != NULL)
	{
		while (s[i])
		{
			src[i] = s[i];
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}

