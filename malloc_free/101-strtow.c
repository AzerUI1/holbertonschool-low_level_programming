#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count words from
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}

	return (count);
}

/**
 * word_len - returns the length of a word starting at str
 * @str: the string starting at the word
 *
 * Return: length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ')
		len++;

	return (len);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, wc, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < wc; i++)
	{
		while (str[k] == ' ')
			k++;

		len = word_len(str + k);

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

	words[wc] = NULL;

	return (words);
}
