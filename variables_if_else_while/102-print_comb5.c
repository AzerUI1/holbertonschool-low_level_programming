#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* print first two-digit number */
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');

			putchar(' ');

			/* print second two-digit number */
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
