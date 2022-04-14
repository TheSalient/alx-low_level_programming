#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - The function that prints int
 * @separator: first param
 * @n: second param
 * @...: the variadic argument
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
if (separator == NULL)
{
printf("%d", va_arg(ap, int));
}
else
{
for (i = 0; i  < n; i++)
{
if (i != (n - 1))
{
printf("%d%s", va_arg(ap, int), separator);
}
else
{
printf("%d", va_arg(ap, int));
}
}
}
va_end(ap);
printf("\n");
}
