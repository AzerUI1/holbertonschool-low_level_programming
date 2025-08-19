#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _strlen - Returns the length of a string
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

/**
 * is_digit_string - Checks if a string contains only digits
 */
int is_digit_string(char *s)
{
    int i = 0;
    if (!s || !*s)
        return 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

/**
 * multiply - Multiplies two numbers represented as strings
 */
void multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1), len2 = _strlen(num2);
    int len_result = len1 + len2;
    int *result = calloc(len_result, sizeof(int));
    int i, j, carry, product;

    if (!result)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }
        result[i + j + 1] += carry;
    }

    // Skip leading zeros
    i = 0;
    while (i < len_result && result[i] == 0)
        i++;

    if (i == len_result)
        printf("0\n");
    else
    {
        for (; i < len_result; i++)
            printf("%d", result[i]);
        printf("\n");
    }
    free(result);
}

/**
 * main - Entry point
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    multiply(argv[1], argv[2]);
    return (0);
}
