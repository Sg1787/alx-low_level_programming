#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
 if (!head || !*head)
 return (0);
listint_t *temp;
 int num;

temp = (*head)->next;
num = (*head)->n;
free(*head);
*head = temp;

return (num);
}
