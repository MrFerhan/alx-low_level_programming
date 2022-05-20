#include "lists.h"
/**
  *free_list - frees a list_t
  *@head: pointer to head of list.
  *
  *Return: no return
  */
void free_list(list_t *head)
{
	list_t *x;

	while (head != NULL)
	{
		x = head;
		free(head->str);
		head = head->next;
		free(x);
	}
}
