#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz_c - This is a function
 * 
 * Return: Always 0
 */
void fizzbuzz_c(void)
{
int i; 
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
_putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
_putchar(' ');
}
else if (i % 3 == 0)
{
printf("Fizz");
_putchar(' ');
}
else
{
printf("%d", i);
_putchar(' ')
}
}
}