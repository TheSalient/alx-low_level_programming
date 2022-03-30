#include "main.h"
/**
 * _print_rev_recursion - a function ...
 * @s: the string parameter
 *
 * Return: 1 or 0
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
