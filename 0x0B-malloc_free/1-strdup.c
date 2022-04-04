#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - the function that print char in specific number.
 * @s: the size to print.
 *
 * Return: char.
 */
char * _strdup(const char *s)
{
size_t len = strlen(s) + 1;
void *new = malloc(len);
if (s == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
return ((char *) memcpy(new, s, len));
}
