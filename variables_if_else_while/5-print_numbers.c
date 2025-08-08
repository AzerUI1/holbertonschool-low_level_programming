#include <stdio.h>

/**
 * main - Prints digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
