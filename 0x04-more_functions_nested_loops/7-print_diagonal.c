#include "main.h"
/**
 * print_diagonal - This is a function
 * @n: This is the parameter
 * Return: Always l and n
 */
void print_diagonal(int n)
{
int i = 0;
int k = 0;
if (n > 0)
{
while (i < n)
{
while (k < i)
{
_putchar(' ');
k++;
}
_putchar('\\');
_putchar('\n');
i++;
k = 0;
}
}
else
{
_putchar('\n');
}
}
