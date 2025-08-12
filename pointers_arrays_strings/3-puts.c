#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to print
 *
 * Description: This function prints each character of the string
 *              pointed to by str, followed by a newline.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
	
