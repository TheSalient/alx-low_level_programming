#include "main.h"

/**
 * print_binary - the function that convert to binary.
 * @n: the first parameter.
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int the;

for (i = 63; i >= 0; i--)
{
the = n >> i;
if (the & 1)
{
printf("1");
count++;
}
else if (count)
{
printf("0");
}
}
if (!count)
{
printf("0");
}
}
