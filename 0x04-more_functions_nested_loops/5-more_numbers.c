#include "main.h"
/**
 * more_numbers - This is a function
 * 
 * Return: Always 0
 */
void more_numbers(void)
{
int n, c;
for (c = 0; c < 10; c++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
