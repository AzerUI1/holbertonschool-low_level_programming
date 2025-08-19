#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return (len);
}

/**
 * is_digit_string - Check if a string contains only digits
 * @s: The string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit_string(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
            return (0);
        i++;
    }
    return (1);
}

/**
 * multiply - Multiply two numbers represented as strings
 * @num1: First number
 * @num2: Second number
 */
void multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int i, j, carry, product;
    int *result;
    
    /* Allocate and initialize result array with zeros */
    result = calloc(len_result, sizeof(int));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }
    
    /* Perform long multiplication */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }
        result[i + j + 1] = carry;
    }
    
    /* Find the first non-zero digit */
    i = 0;
    while (i < len_result && result[i] == 0)
        i++;
    
    /* If all digits are zero, the result is zero */
    if (i == len_result)
    {
        printf("0\n");
    }
    else
    {
        /* Print the result */
        for (; i < len_result; i++)
            printf("%d", result[i]);
        printf("\n");
    }
    
    free(result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    /* Check number of arguments */
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    
    /* Check if both arguments are composed of digits only */
    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        return (98);
    }
    
    /* Multiply the numbers */
    multiply(argv[1], argv[2]);
    
    return (0);
}
