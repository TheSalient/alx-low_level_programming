#include <stdio.h>
#include <stdlib.h>
 * @size: the size to print.
 * @c: the character to print.
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
        char *s;
        unsigned int i;
        s = malloc((size + 1) * sizeof(char));
        if (s == 0)
        {
                return (NULL);
        }
        i = 0;
        while (i < size)
        {
                s[i] = c;
                i++;
        }
        s[i] = '\0';
        return (s);
}
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
