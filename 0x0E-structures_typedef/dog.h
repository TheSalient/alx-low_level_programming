#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * 
 * Description: This is struct has three parameter of float and char * types.
 */
struct dog
{
    char * name;
    float age;
    char * owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
