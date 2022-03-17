#include "main.h"
/**
 * print_to_98 - This is a function
 * @n: This is the parameter
 * Return: Always l and n
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i < -9 )
{
_putchar('-');
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
else if (i<0 && i >= -9)
{
_putchar('-');
_putchar('0' + i);
}
else if (i >= 0 && i < 10)
{
_putchar(i);
}
else if (i >= 10 && i < 100)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
_putchar(',');
_putchar(' ');
}
else if (i >= 100)
{
_putchar('0' + (i / 100));
_putchar('0' + (i % 10));
_putchar(',');
_putchar(' ');
}
}
}