#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - the function that print char in specific number.
 * @s: the size to print.
 *
 * Return: char.
 */
char * _strdup(const char *s)
{
int len = strlen(s) + 1;
void *new = malloc(len);
if (s == NULL)
{
return ("failed to allocate memory\n");
}
return ((char *) memcpy(new, s, len));
}
