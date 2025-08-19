#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size); /* allocate memory */
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c; /* initialize each element with c */

	return (arr);
}
