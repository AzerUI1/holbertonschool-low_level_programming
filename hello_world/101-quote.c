#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    const char msg_part1[] = "and that piece of art is useful\" - ";
    const char msg_part2[] = "Dora Korpar, 2015-10-19\n";

    write(2, msg_part1, sizeof(msg_part1) - 1);
    write(2, msg_part2, sizeof(msg_part2) - 1);
    return (1);
}
