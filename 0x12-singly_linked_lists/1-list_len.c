#include "lists.h"
/**
  *list_len - number of lists
  *@h: pointer to the list
  *
  *Return: numberof linked list.
  */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}	
