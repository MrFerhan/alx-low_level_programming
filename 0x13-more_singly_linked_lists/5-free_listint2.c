#include "lists.h"

/**
  * free_listint2 - free the list and set head to NULL.
  * @head: a pointer to stru
  *
  * Return: 0
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (*head)
	{

		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
