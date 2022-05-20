#include "lists.h"
/**
  *free_list - frees a list_t
  *@head: pointer to head of list.
  *
  *Return: no return
  */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
		free(head);
	}
}
