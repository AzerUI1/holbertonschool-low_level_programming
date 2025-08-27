#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: function pointer to compare values
 *
 * Return: index of first matching element, -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

