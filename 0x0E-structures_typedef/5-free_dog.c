#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to a struct
 *@d: the address of the struct
 *
 */

void free_dog(dog_t *d)

{
free(d);
}
