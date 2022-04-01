#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
* main - function
*
* @argc: the chaine
*@argv: another parameter
* Return: Always 0.
*/
int main(int argc, char **argv)
{
UNUSED(argv);
printf("%d\n", (argc - 1));
return (0);
}
