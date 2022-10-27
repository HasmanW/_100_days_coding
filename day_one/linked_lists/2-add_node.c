#include "main.h"
/**
 * add_node - adds a node at the beginning of a linked list
 * @head: double pointer to 'list_t' list
 * @str: new str to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    /*declare our variables*/
    list_t *newNodePtr;
    unsigned int len = 0;

    /*find length of string*/
    while(str[len] != '\0')
    {
        len++;
    }

    newNodePtr = malloc(sizeof(list_t));
    if (newNodePtr == NULL)
    {
        return (NULL);
    }
    else
    {
        newNodePtr->str = strdup(str);
        newNodePtr->len = len;
        newNodePtr->next = (*head);
        (*head) = newNodePtr;
    }
    return(*head);
}
