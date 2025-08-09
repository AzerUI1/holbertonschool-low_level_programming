#include "main.h"

/**
 * print_square - Prints a square of # characters
 * @size: Size of the square
 *
 * Description: Prints a square of size x size using # characters.
 *              If size is 0 or less, prints only newline.
 */
void print_square(int size)
{
    int row, col;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
