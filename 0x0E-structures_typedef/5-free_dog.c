#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to a struct
 *@d: the address of the struct
 *
 */

void free_dog(dog_t *d)

{


	if ((*d).owner != NULL)
	free((*d).owner);
	if ((*d).name != NULL)
	free((*d).name);
	free(d);
}
