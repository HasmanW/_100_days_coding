#include "lists.h"

/**
 * free_listint - free memory allocated
 * head: pointer to our listint_t list
 */
void free_listint(listint_t *head)
{
    while(head->next != NULL)
    {
        free(head);
        head = head->next;
    }
    free(head);
}