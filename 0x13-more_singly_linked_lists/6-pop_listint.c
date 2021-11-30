/**
 *pop_listint - deletes head of a list.
 *@head: a pointer pointing to a pointer that points to the head of a list.
 *Return: the data of the deleted node.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int head_data;

if(*head == NULL)
return (NULL;

temp = *head;
head_data = temp->n;
*head = temp->next;
free(temp);
return (head_data);
}
