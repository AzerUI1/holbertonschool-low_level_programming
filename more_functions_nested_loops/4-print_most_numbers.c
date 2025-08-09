#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 (excluding 2 and 4)
 *
 * Description: Prints numbers from 0 to 9 followed by new line,
 *              skips printing 2 and 4.
 *              Uses only two _putchar calls.
 */
void print_most_numbers(void)
{
    char num;

    for (num = '0'; num <= '9'; num++)
    {
        if (num != '2' && num != '4')
            _putchar(num);
    }
    _putchar('\n');
}
