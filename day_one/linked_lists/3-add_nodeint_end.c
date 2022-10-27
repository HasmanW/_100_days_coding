#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: double pointer to listint_t list
 * @n: integer value
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    /*declare and initialize variables*/
    listint_t *newNodePtr;
    listint_t *currentPtr = *head;

    /*create memory space*/
    newNodePtr = malloc(sizeof(listint_t));
    if (newNodePtr == NULL)
    {
        return(NULL);
    }
    else
    {
        /*input values*/
        newNodePtr->n = n;
        newNodePtr->next = NULL;

        /*locating insertion point*/
        if(currentPtr == NULL)
        {
            *head = newNodePtr;
        }
        else
        {
            while(currentPtr->next)
            {
                currentPtr = currentPtr->next;
            }
            currentPtr->next = newNodePtr;
        }
        return (newNodePtr);
    }
}