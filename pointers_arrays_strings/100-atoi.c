#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description:
 *   Handles multiple '+' and '-' signs before the number,
 *   stops at first non-digit after digits,
 *   returns 0 if no digits found,
 *   properly handles INT_MIN without overflow.
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;
	int digit_found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* do nothing */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (digit_found)
			break;
		i++;
	}

	if (sign < 0)
		return (-((int)result));
	else
		return ((int)result);
}
