#include "lists.h"

/**
 *add_node - fun add new nod at beginning of a linked_list
 *@head: pointer to the head linked_list
 *@str: string
 *
 *Return: NULL or address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node =  malloc(sizeof(list_t));
unsigned int i = 0;

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);

while (new_node->str[i])
{
i++;
}
new_node->len = i;
new_node->next = *head;
*head = new_node;

return (new_node);
}
