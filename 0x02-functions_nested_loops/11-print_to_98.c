#include "main.h"
/**
 * print_to_98 - This is a function
 * @n: This is the parameter
 * Return: Always l
 */
void print_to_98(int n)
{
if (n < 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
} 
else if (n > 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n--;
}
else
{
_putchar(n + '0');
}
}
