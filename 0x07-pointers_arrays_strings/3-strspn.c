#include <string.h>
/**
* _strspn - This is used to output the character.
* @s: This is a character
*@accept: another parameter

* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (s[i] && strchr(accept, s[i]))
{
i++;
}
return (i);
}
