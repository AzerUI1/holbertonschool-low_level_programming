#include <stdlib.h>
#include <string.h>
#include "dog.h"

/* custom function to get string length without using strlen */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* allocate memory for the dog */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* allocate memory for name and copy it */
	d->name = malloc(str_len(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);

	/* allocate memory for owner and copy it */
	d->owner = malloc(str_len(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	/* set age */
	d->age = age;

	return (d);
}

