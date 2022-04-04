#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - the function that print char in specific number.
 * @size: the size to print.
 * @c: the character to print.
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == 0)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
