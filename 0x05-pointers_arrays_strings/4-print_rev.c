#include "main.h"
/**
 * print_rev - check the code
 *@s: This is the parameter.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 1;
while (s[i])
{
i++;
}
for (i; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
