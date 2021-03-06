#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - structure
 * 
 * @name name 
 * @age age 
 * @owner owner 
 * @return dog_t* 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d ==NULL)
        return (NULL);
    d->name = name;
    d->age = age;
    d->owner = owner;

    return (d);   
}
