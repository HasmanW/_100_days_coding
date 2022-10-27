#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0;

    while(h)
    {
        printf("%d\n", h->n);
        h = h->next;
        nodes++;
    }

    return (nodes);
}
