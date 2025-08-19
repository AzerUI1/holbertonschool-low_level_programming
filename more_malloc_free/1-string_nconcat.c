#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string,
 * or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2, size;

	/* treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find lengths of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* if n >= len2, use whole s2 */
	if (n >= len2)
		n = len2;

	size = len1 + n + 1;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	/* copy s1 into ptr */
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	/* copy first n chars of s2 */
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
