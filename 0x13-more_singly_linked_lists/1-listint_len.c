#include "lists.h"

/**
 *listint_len - counts numbers of node in the linked list.
 *@h: a pointer to the head of the list.
 *
 *Returns: number of node in the list 
 */

size_t listint_len(const listint_t *h)
{
int num_nodes = 0;
while (h != NULL)
{
h = h->next;
num_nodes++;
}
return (num_nodes);
}
