#include "main.h"

/**
 * wildcmp - compares two strings, allowing '*' in s2
 * @s1: first string
 * @s2: second string (may contain '*')
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*')
	{
		/* Skip multiple '*' recursively */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* '*' matches empty string */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* '*' matches first char of s1 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		return (0);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
