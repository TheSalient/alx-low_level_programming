#include "main.h"
/**
 * rev_string - a function that takes a pointer to an int as parameter and
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */
void rev_string(char *s)
{
int i = 0, ch, k;
char c;
while (s[i] != '\0')
{
i++;
}
i--;
ch = i;
k = i / 2;
i = 0;
while (i <= k)
{
c = s[i];
s[i] = s[ch];
s[ch] = c;
i++;
ch--;
}
}
