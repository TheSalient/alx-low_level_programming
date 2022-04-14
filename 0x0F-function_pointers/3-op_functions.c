#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - the function
 * 
 * @a: The first param  
 * @b: The second param 
 * return: 1 or 0, int 
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - the function ..
 * @a: The first param  
 * @b: The second param 
 * 
 * return: 1 or 0, int 
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - the function
 * 
 * @a: The first param  
 * @b: The second param 
 * return: 1 or 0, int 
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - the function
 * 
 * @a: The first param  
 * @b: The second param 
 * return: 1 or 0, int 
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - the function
 * 
 * @a: The first param  
 * @b: The second param 
 * return: 1 or 0, int 
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}
