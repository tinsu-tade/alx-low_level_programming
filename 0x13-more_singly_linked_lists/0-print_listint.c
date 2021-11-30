#include "lists.h"
/**
 *print_listint - prints members of the list
 *@listint_t: a pointer to the head of the linked list 
 *
 *Return: returns the number of nodes on linked list
 */

size_t print_listint(const listint_t *h)
{
int num_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num_nodes++;
}
return (num_nodes);
}
