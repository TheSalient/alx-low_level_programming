#include <stdlib.h>

/**
 * str_concat - a function
 * @s1: first parameter
 * @s2: second parameter
 * Return: 1 or 0
 */

char *str_concat(char *s1, char *s2)
{
	char *src;
	int len = 0, i = 0, len2 = 0, i2 = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = ""
	while (s1[len])
		len++;
	while (s2[len2])
		len2++;
	src = malloc((len + len2 + 1) * sizeof(char));
	if (src != NULL)
	{
		while (s1[i])
		{
			src[i] = s1[i];
			i++;
		}
		while (s2[i2])
		{
			src[i + i2] = s2[i2];
			i2++;
		}
		src[i + i2] = '\0';
	}
	return (src);
}
