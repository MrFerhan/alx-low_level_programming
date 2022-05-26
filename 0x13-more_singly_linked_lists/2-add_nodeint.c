#include "lists.h"

/**
  * add_nodeint - add node to the beginning of
  * @head: a pointer to struc
  * @n: number of new node to add
  *
  * Return: NULL or address
  */

listint_t *add_nodeint (listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));

	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
