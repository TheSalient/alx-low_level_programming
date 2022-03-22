#include "main.h"
/**
 * puts2 - check the code
 *@str: This is the parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
char i = 0;
while (str[i])
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
putchar('\n');
}
