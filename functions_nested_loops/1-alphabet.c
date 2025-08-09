#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * You can only use _putchar twice in your code
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
