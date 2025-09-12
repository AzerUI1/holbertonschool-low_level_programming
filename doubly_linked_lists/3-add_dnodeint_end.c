#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to head pointer
 * @n: value
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *temp;

    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}

