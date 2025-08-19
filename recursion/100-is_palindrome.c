#include "main.h"
#include <string.h>

/**
 * check_palindrome - recursive helper to check palindrome
 * @s: string to check
 * @left: left index
 * @right: right index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (check_palindrome(s, left + 1, right - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome, 0 if not
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	if (!s)
		return (1);

	length = strlen(s);

	if (length == 0)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}
