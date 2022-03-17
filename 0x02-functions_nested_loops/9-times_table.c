#include "main.h"
/**
 * times_table - This is a function
 * Return: Always 0
 */
void times_table(void)
{
int c, d, z;
for (c = 0; c < 10; c++)
{
for (d = 0; d < 10; d++)
{
z = c * d;
if (c == 0)
{
_putchar(z + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (z < 10 && c != 0)
{
_putchar(z + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (z >= 10)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
