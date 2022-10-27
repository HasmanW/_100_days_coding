#include "main.h"

void free_list(list_t *head)
{
    list_t *tempPtr;
    tempPtr = head;

    while(tempPtr->next != NULL)
    {
        free(tempPtr);
        tempPtr = tempPtr->next;
    }
    free(tempPtr);
}