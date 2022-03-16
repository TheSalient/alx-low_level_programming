#include "main.h"
/**
* print_last_digit - This is a function that print the last digit of its arguement
* @n: This is the parameter
* return: int
*/
int print_last_digit(int n) 
{
int l;
l = n % 10;
if (l < 0)
{
l = l * -1;
}
_putchar(l + '0');
return (l);
}