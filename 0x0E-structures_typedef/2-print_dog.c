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
    return;
if (d->name == NULL)
    d->name = NULL;
if (d->owner == NULL)
    d->owner = NULL;
if (d->age == 0)
    printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
else
{
    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner);
}
}
