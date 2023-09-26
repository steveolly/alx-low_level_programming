#include "lists.h"

/**
 * pop_listint - function name
 * @head: head
 * Return: return data;
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (node_data);
}
