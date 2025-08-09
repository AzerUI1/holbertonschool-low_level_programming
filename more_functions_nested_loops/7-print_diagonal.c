#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the '\' character should be printed
 *
 * Description: Prints a diagonal line made of '\' characters,
 *              with proper indentation. If n is 0 or less,
 *              prints only newline.
 */
void print_diagonal(int n)
{
    int i, spaces;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (spaces = 0; spaces < i; spaces++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
