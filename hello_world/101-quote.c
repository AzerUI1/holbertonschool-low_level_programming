#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote to standard error
 *
 * Return: 1 (Always)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
