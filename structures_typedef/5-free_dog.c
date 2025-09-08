#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t structure and its allocated fields
 * @d: pointer to the dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}

