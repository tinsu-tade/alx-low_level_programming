#include "lists.h"
/*
 *free_listint - frees a list.
 *@head: points to a head of the list.
 *
 */
void free_listint(listint_t *head)
{
while(head != NULL)
{
free(head);
}
}
