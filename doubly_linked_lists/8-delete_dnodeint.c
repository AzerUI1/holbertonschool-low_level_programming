#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 2);  // удаляем узел с индексом 2
    print_dlistint(head);
    free_dlistint(head);
    return (0);
}

