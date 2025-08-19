#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if ac == 0, av == NULL,
 * or malloc fails
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, len, pos;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	/* calculate total length needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	len += ac; /* add space for newline after each argument */

	result = malloc(sizeof(char) * (len + 1)); /* +1 for null terminator */
	if (result == NULL)
		return (NULL);

	pos = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[pos++] = av[i][j];
		result[pos++] = '\n';
	}

	result[pos] = '\0';

	return (result);
}
