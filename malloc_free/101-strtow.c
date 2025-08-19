#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count words */
	count = 0;
	for (i = 0; str[i]; i++)
		if ((str[i] != ' ' && (i == 0 || str[i - 1] == ' ')))
			count++;

	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < count; i++)
	{
		while (str[k] == ' ')
			k++;

		len = 0;
		j = k;
		while (str[j] != ' ' && str[j] != '\0')
		{
			len++;
			j++;
		}

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[k++];

		words[i][len] = '\0';
	}

	words[count] = NULL;

	return (words);
}
