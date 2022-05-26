#include "lists.h"

/**
  * get_nodeint_at_index - returns the specific node.
  * @head:a pointer to stru
  * @index: the specific node.
  *
  * Return: NULL or the node or empty
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
			i++;
	}
	return (NULL);
}
