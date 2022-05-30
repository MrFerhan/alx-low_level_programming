#include "lists.h"

/**
  * delete_nodeint_at_index - a function that deletes the node at
  * index index of a linked list.
  * @head: a pointer to listint_t structure
  * @index: index of the node to delete
  *
  * Return: 1 on success, or -1 on failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *rm_node;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (i < index)
		{
			tmp = tmp->next;

			if (tmp == NULL)
				return (-1);
			i++;
		}
		rm_node = tmp;
		rm_node = rm_node->next;
		tmp->next = rm_node->next;
		free(rm_node);
	}
	return (1);
}