#include "main.h"
#include <stdlib.h>

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
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	print_number(coins);

	return (0);
}
