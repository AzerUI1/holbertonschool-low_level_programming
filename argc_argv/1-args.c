#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num = argc - 1;
	int div = 1;
	int digit;
	(void)argv;

	if (num == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		num %= div;
		div /= 10;
	}
	_putchar('\n');

	return (0);
}
