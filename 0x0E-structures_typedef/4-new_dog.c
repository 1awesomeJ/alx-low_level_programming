#include <stdlib.h>
#include "dog.h"
#include <string.h>

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

	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
	free(p);
	return (NULL);
	}
(*p).age = age;
(*p).name = strdup(name);
if ((*p).name == NULL)
{
	free((*p).name);
	free((*p).owner);
	free(p);
	return (NULL);
}
(*p).owner = strdup(owner);
if ((*p).owner == NULL)
{
	free((*p).owner);
	free((*p).name);
	free(p);
	return (NULL);
}
return (p);

}
