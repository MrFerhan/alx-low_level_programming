#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: a pointer of  stru
  *
  * Return: 0
  */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int x;

	if (*head == NULL)
		return (0);

	x = (*head)->x;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (x);
}
