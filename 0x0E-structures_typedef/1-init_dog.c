#include "dog.h"
/**
 * init_dog - sets the values of data in the dog struct using pointers
 *@d: the address of the struct
 *@name: the name to be set
 *@age: the age to be set
 *@owner:the owner to be set
 */



void init_dog(struct dog *d, char *name, float age, char *owner)

{
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
