#include "main.h"
/**
 * puts2 - check the code
 *@str: This is the parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
int p = *str;
int i = 0;
while (i >= 0)
{
if (i % 2 == 0)
{
_putchar('p[i]');
}
i++;
}
_putchar('\n');
}
