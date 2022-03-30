#include "main.h"
/**
* _root - function
*
* @a: the chaine
* @n: the second parameter
* Return: Always 0.
*/
int _prime(int n, int a)
{
if (a == n)
{
return (1);
}
else if (n % a == 0)
{
return (0);
}
else
{
return (_prime(n, a + 1));
}
}

/**
* _sqrt_recursion - function
*
* @n: the chaine
* Return: Always 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (_prime(n, 2));
}
}
