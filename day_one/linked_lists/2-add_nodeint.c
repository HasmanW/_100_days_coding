#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: double pointer to listint_t list
 * @n: integer value
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    /*declare variables*/
    listint_t *newNodePtr, *temp;

    /*create space in memory and checking if space has been allocated*/
    newNodePtr = malloc(sizeof(listint_t));
    if(newNodePtr == NULL)
    {
        return (NULL);
    }
    else
    {
        /*assign values to new node*/
        newNodePtr->n = n;
        newNodePtr->next = *head;
        *head = newNodePtr;
    }

    return (*head);
}