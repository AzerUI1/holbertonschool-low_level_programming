#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if digits only, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - converts a string to an integer (positive only)
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, num = 0;

	for (; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	return (num);
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int div = 1, digit;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	while (n / div >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = n / div;
		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
	_putchar('\n');
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}
		sum += _atoi(argv[i]);
	}

	print_number(sum);

	return (0);
}
