#include <stdio.h>
/**
* main - function
*
* @argc: the chaine
*@argv: another parameter
* Return: Always 0.
*/
int main(int argc, int **argv)
{
if (argc == 3)
{
printf("%d\n", (argv[1] * argv[2]));
}
else
{
printf("Error");
}
return (0);
}
