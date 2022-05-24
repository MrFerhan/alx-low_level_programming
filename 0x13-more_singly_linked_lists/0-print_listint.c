#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: a pointer to function structure
 *
 * Return: the no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
