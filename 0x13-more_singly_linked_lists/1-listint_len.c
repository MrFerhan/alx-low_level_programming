#include "lists.h"

/**
  * listint_len - length of nodes
  * @h: pointer to fun
  *
  * Return: no of nodes
  */
size_t listint_len(const listint_t *h)
{

	int x;

	x = 0;

	while (h)
	{
		h = h->next;

		x++;
	}
	return (x);
}
