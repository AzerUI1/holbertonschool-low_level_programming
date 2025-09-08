#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 * Description: if str is NULL, prints [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}

/**
 * main - empty main for testing purpose
 *
 * Return: Always 0
 */
int main(void)
{
	return (0);
}

