#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be processed
 *
 * Description: If the string length is odd, the function
 * prints from (length + 1) / 2 to the end.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, start;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Determine where to start printing */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print from start to end */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
