#include <stdio.h>
#include "main.h"
/**
 * main - This is a function
 * 
 * Return: Always 0
 */
int main()
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
return 0;
}
