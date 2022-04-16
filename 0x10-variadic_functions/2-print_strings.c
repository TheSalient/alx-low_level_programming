#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - The function that prints int
 * @separator: first param
 * @n: second param
 * @...: the variadic argument
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i  < n; i++)
{
if (va_arg(ap, char *))
{
printf("%s", va_arg(ap, char *));
}
else
{
printf("nil");
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
