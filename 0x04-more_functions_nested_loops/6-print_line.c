#include "main.h"
/**
 * print_line - This is a function
 * @n: This is the parameter
 * Return: Always l and n
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
