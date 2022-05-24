#include "lists.h"

/**
  * free_listint - frees list
  * @head: a pointer to stru
  *
  * Return: 0
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{

		tmp = head;

		head = head->next;

		free(tmp);
	}
	free(head);
}
