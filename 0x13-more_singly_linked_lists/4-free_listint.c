#include "lists.h"
/*
 *free_listint - frees a list.
 *@head: points to a head of the list.
 *
 */
void free_listint(listint_t *head)
{
listint_t *new_node;
listint_t *sec_new;
new_node = head;
while(new_node != NULL)
{
sec_new = new_node->next;
free(new_node);
new_node = sec_new;
}
}
