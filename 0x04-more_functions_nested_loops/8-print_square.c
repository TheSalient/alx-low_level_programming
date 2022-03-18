#include "main.h"
/**
 * print_square - This is a function
 * @size: This is the parameter
 * Return: Always l and n
 */
void print_square(int size)
{
int i = 0;
int k = 0;
if (size > 0)
{
while (size > k)
{
while (i < size)
{
_putchar('#');
i++;
}
_putchar('\n');
k++;
i = 0;
}
}
else
{
_putchar('\n');
}
}
