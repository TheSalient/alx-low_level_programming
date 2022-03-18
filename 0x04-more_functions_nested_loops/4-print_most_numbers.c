#include "main.h"
/**
 * print_most_numbers - This is a function
 * 
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
int c = n;
if (c != 2 && c != 4)
{
_putchar(c + '0');
}
}
_putchar('\n');
}
