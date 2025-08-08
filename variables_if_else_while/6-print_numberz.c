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
		putchar(n + '0'); /* convert digit to char */
		n++;
	}
	putchar('\n'); /* print newline */
	return (0);
}
