#include "main.h"
/**
 * print_triangle - This is a function
 * @size: This is the parameter
 * Return: Always l and n
 */
void print_triangle(int size)
{
int i = 0;
int k = 0;
if (size > 0)
{
while (i < size)
{
while (k < i)
{
_putchar(' ');
k++;
}
_putchar('#');
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