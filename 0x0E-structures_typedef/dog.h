#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct to define the details of a dog
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

#endif

#ifndef INIT
#define INIT
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
