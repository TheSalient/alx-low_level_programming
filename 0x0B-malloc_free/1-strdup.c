#if defined _LIBC || defined STDC_HEADERS
#include <string.h>
#include <stdlib.h>
#else
char *malloc();
char *memcpy;
#endif
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
if (new == NULL)
{
return (NULL);
}
return ((char *) memcpy(new, s, len));
}
