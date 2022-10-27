#include "main.h"

size_t list_len(const list_t *h)
{
    size_t node = 0;

    while(h)
    {
        node++;
        h = h->next;
    }
    return (node);
}