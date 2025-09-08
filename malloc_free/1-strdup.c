#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0') /* calculate length of str */
		len++;

	dup = malloc(sizeof(char) * (len + 1)); /* allocate memory for copy */
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i]; /* copy each character */

	dup[len] = '\0'; /* null-terminate the new string */

	return (dup);
}
