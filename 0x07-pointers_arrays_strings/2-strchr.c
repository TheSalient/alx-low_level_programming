#include "main.h"
/**
 * _strchr - a function ...
 * @s: char
 *@c: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
char **e;
int i;
for (i = 0; i < sizeof(s); i++)
{
if (s[i] == c)
{
int d;
for (d = i; d < sizeof(s); d++)
{
e = s[d];
}
return (e);
break;
}
}
}