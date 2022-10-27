#include "main.h"
/**
 * add_node_end - adds a node at the end of the list
 * @head: double pointer to list_t list
 * @str: string to add to the node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
    /*create the node*/
    list_t *newNodePtr;
    list_t *currentPtr = *head;
    unsigned int len = 0;

    /*length of str*/
    while(str[len] != '\0')
    {
        len++;
    }

    /*allocate memory location*/
    newNodePtr = malloc(sizeof(list_t));

    if(newNodePtr == NULL)
    {
        return(NULL);
    }

    else
    {
        /*assign values to node*/
        newNodePtr->str = strdup(str);
        newNodePtr->len = len;
        newNodePtr->next = NULL;

        /*locating insertion point*/
        if(*head == NULL)
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
    }
    return(newNodePtr);
}
