#include "main.h"
#include <string.h>
/**
* isPalRec - function
*
* @s: the chaine
* @b: another parameter
* @e: another parameter
* Return: Always 0.
*/
int isPalRec(char *s, int b, int e)
{
if (b == e)
{
return (1);
}
if (s[b] != s[e])
{
return (0);
}
if (b < (e + 1))
{
return (isPalRec(s, b + 1, e - 1));
}
return (1);
}
/**
* is_palindrome - function
*
* @s: the chaine
* Return: Always 0.
*/
int is_palindrome(char *s)
{
int n = strlen(s);
if (n == 0)
{
return (1);
}
return (isPalRec(s, 0, (n - 1)));
}
