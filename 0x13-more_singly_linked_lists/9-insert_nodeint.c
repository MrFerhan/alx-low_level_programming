#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node on the specific node
  * @head: a pointer to stru
  * @idx: index of new node
  * @n: int
  *
  * Return: address to ne, node at specified index,or NULL it falied
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;

	node = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = new;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		node = node->next;
		idx--;

		if (!node)
		{
			free(new);
			return (NULL);
		}
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
