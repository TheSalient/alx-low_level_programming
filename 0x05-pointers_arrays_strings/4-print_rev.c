#include "main.h"
/**
 * print_rev - check the code
 *@s: This is the parameter.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 1;
while (s[i] != '\0')
{
i++;
}
i--;
if (i > 0)
{
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
else
{
_putchar(" ");
}
}
