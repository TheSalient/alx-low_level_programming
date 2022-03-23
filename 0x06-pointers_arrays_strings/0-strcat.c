#include "main.h"
/**
 * _strcat - a function that takes a pointer to an int as parameter and
 * @dest: chaine of caractere
 * @src: cahine caractere
 *
 * Return: dest
 */
char *_strcat (char *dest, char *src)
{
int i = 0;
while (dest[i])
{
if (dest[i] == '\0')
{
int k = 0; 
while (src[k])
dest[i + 1] = src[k];
k++;
}
i++;
}
return (dest);
putchar('\n');
}
