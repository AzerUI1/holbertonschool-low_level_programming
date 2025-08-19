#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * errors - prints "Error" and exits with status 98
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, j, carry, n1, n2, *res;

	if (argc != 3)
		errors();

	num1 = argv[1];
	num2 = argv[2];

	if (!_isdigit(num1) || !_isdigit(num2))
		errors();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;

	res = malloc(sizeof(int) * len);
	if (res == NULL)
		return (1);

	for (i = 0; i < len; i++)
		res[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += res[i + j + 1] + (n1 * n2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[i + j + 1] += carry;
	}

	i = 0;
	while (i < len && res[i] == 0)
		i++;
	if (i == len)
		printf("0");
	for (; i < len; i++)
		printf("%d", res[i]);
	printf("\n");

	free(res);
	return (0);
}

