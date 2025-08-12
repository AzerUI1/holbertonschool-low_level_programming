#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[7];
	int sum = 0, i, rand_val;

	srand(time(NULL));

	/* Generate first 5 random chars */
	for (i = 0; i < 5; i++)
	{
		rand_val = rand() % 25 + 65; /* Random uppercase letters A-Z */
		password[i] = rand_val;
		sum += rand_val;
	}

	/* Sixth char depends on sum */
	password[5] = (sum % 26) + 65;

	/* Null terminate */
	password[6] = '\0';

	printf("%s\n", password);

	return (0);
}

