#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit - проверяет, что строка состоит только из цифр
 * @s: строка
 * Return: 1 если цифры, 0 иначе
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return 0;
        s++;
    }
    return 1;
}

/**
 * main - умножает два положительных числа
 * @argc: количество аргументов
 * @argv: аргументы
 * Return: 0 при успехе, 98 при ошибке
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, len_res, i, j, carry, n1, n2, *result;
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        printf("Error\n");
        exit(98);
    }

    len1 = strlen(num1);
    len2 = strlen(num2);
    len_res = len1 + len2;

    result = malloc(sizeof(int) * len_res);
    if (!result)
        return 1;

    for (i = 0; i < len_res; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            result[i + j + 1] += n1 * n2 + carry;
            carry = result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
        result[i + j + 1] += carry;
    }

    i = 0;
    while (i < len_res && result[i] == 0)
        i++;

    if (i == len_res)
        printf("0");
    else
        for (; i < len_res; i++)
            printf("%d", result[i]);

    printf("\n");
    free(result);
    return 0;
}
