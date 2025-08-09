#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the '_' character should be printed
 *
 * Description: Prints the character '_' n times followed by newline.
 *              If n is 0 or less, prints only newline.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
