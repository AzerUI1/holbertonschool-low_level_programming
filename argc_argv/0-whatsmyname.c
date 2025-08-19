#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i;

    (void)argc; /* убираем warning про неиспользуемый argc */

    for (i = 0; argv[0][i] != '\0'; i++) /* идём по строке символ за символом */
    {
        _putchar(argv[0][i]);
    }

    _putchar('\n');
    return (0);
}