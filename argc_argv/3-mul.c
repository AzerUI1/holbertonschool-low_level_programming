#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	if (!s)
		return (0);

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - '0');
	}

	return (num * sign);
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int div = 1;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
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
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	print_number(a * b);

	return (0);
}
