#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - the function  
 * @d: the parameter
 * 
 * return: always 0
 */
void print_dog(struct dog *d)
{
if (d == NULL)
    printf("");
else if (d.name == NULL)
    printf("Name: (nil)");
else if (d->age == NULL)
    printf("Age: (nil)");
else if (d->owner == NULL)
    printf("Owner: (nil)");
else
{
    printf("Name: %s\n", d->name);
    printf("Age: %s\n", d->age);
    printf("Owner: %s\n", d->owner);
}
}
