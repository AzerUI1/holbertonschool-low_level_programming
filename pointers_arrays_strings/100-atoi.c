#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description: The function handles multiple '+' and '-' signs before
 *              the number, ignores non-digit characters before the number,
 *              and returns 0 if no digits found.
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, digit_found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* '+' does not change sign */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (digit_found)
			break;
		i++;
	}

	return (sign * result);
}
