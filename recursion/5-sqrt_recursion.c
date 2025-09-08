#include "main.h"

/**
 * sqrt_helper - helper to find square root recursively
 * @n: number to find square root of
 * @i: current guess
 *
 * Return: natural square root or -1 if not found
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: square root, or -1 if not natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
