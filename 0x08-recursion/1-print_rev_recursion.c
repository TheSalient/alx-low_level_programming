#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - a function ...
 * @s: the string parameter
 *
 * Return: 1 or 0
 */
void _print_rev_recursion(char *s)
{
char i, var, ch;
var = strlen(s);
if (i < var / 2)
{
ch =  s[i];
s[i] = s[var - i - 1];
s[var - i - 1] = ch;
i++;
_print_rev_recursion(s);
}
}