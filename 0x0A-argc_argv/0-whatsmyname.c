#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
* main - function
*
* @argc: the chaine
*@argv: another parameter
* Return: Always 0.
*/
int main(int argc, char **argv)
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
