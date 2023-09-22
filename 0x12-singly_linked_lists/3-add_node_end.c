#include "lists.h"
/**
 * add_node_end - function name
 * @head: head
 * @str: string
 * Return: a pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
