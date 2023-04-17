#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog struct
 * @d: Pointer to the dog struct to be freed
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
