#include "main.h"
/**
* _root - function
*
* @a: the chaine
* @n: the second parameter
* Return: Always 0.
*/
int _root(int n, int a)
{
if (a * a > n)
{
return (-1);
}
else if (a * a == n)
{
return (a);
}
else
{
return (_root(n, a + 1));
}
}

/**
* _sqrt_recursion - function
*
* @n: the chaine
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_root(n, 0));
}
}
