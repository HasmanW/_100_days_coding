#include "main.h"

size_t print_list(const list_t *h)
{
    size_t node = 0;

    while(h)
    {
        if(h->str != NULL)
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        else
        {
            printf("[0] (nil)\n");
        }

        h = h->next;
        node++;
    }
    return (node);
}