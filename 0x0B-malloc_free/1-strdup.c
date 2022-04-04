#if defined _LIBC || defined STDC_HEADERS
#include <string.h>
#include <stdlib.h>
#endif
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
if (new == NULL)
{
return (NULL);
}
return ((char *) memcpy(new, s, len));
}
