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
_putchar('z');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
