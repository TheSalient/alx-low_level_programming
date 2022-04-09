#include <stdlib.h>
#include <ctype.h>
unsigned int *multiply(int num1, int num2)
{
    if (isdigit(num1) && isdigit(num2))
    {
        unsigned int *c;
        c = malloc(sizeof(int) * num1);
        c = num1 * num2;
        return (c);
    }
    else
    {
        printf("Error");
        exit(98); 
    }
}

unsigned int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error");
        exit(98);
    }
    unsigned int d;
    d = multiply(argv[0], argv[1]);
    printf("%i\n", d);
} 