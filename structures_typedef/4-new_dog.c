#include <stdlib.h>
#include "dog.h"

/* get string length */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/* copy string manually */
void str_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(str_len(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	str_copy(d->name, name);

	d->owner = malloc(str_len(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	str_copy(d->owner, owner);

	d->age = age;

	return (d);
}

