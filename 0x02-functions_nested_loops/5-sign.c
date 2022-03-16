#include "main.h"
/**
 * print_sign- This is a function islower.
 * @n: This is the parameter.
 * Return: Always 0 and 1 for true and false.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (1);
}
}
