#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure in memory
 * using just the name, age and owner as inputs.
 *@name: name of the dog
 *@age:age of the dog
 *@owner: owner of the dog
 * Return: pointer to the address of the new struct in memory
 */


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p = malloc(sizeof(name) + sizeof(age) + sizeof(owner));
if (p == NULL)
{
	free(p);
	return (NULL);
}

(*p).name = name;
(*p).age = age;
(*p).owner = owner;

return (p);

}
