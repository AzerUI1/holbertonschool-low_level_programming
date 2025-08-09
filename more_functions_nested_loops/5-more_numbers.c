#include "main.h"

/**
 * more_numbers - Prints 0-14 ten times
 *
 * Description: Prints numbers 0 to 14 ten times,
 *              each set followed by a new line.
 *              Uses only three _putchar calls.
 */
void more_numbers(void)
{
    int i, count;

    for (count = 0; count < 10; count++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}
