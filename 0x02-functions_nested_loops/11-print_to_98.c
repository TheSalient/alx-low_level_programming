#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - This is a function
 * @n: This is the parameter
 * Return: Always l and n
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d", i);
printf(",");
printf(" ");
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d", i);
printf(",");
printf(" ");
}
}
printf("98\n");
}
