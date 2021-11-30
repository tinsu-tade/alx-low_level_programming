#include "lists.h"

/**
 *
 *listint_t - add node at the end.
 *@head: a pointer points to pointer that points to node head.
 *@n: holds an integer data.
 *Return: address of a new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lastnode;
listint_t *prevnode;
lastnode = malloc(sizeof(listint_t));

if(lastnode == NULL)
return (NULL);	   
lastnode->n = n;
lastnode->next = NULL;

if(*head == NULL)
{
*head = lastnode;
return (lastnode);
}
prevnode = *head;

while (prevnode->next)
prevnode = prevnode->next;

prevnode->next = lastnode;  	  
}
