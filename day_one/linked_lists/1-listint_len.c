#include "lists.h"
/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: pointer to listint_t list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
    size_t nodes = 0;

    while(h)
    {
        h = h->next;
        nodes++;
    }
    return (nodes);
}