#include "main.h"
/**
 * _isalpha- This is a function islower.
 * @c: This is the parameter.
 * Return: Always 0 and 1 for true and false.
 */
int _isalpha(int c)
{
if (c <= 123 && c >= 97)
{
return (1);
}
else if (c <= 90 && c >= 65)
{
return (1);
}
else
return (0);
}
