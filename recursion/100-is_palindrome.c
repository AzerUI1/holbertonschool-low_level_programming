#include "main.h"

/**
 * check_palindrome - recursive helper to check palindrome
 * @s: string to check
 * @left: left index
 * @right: right index (computed recursively)
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
 * str_length - computes string length recursively
 * @s: string
 *
 * Return: length of string
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
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

	length = str_length(s);

	if (length == 0)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}
