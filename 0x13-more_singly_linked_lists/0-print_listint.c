#include "lists.h"

/**
 * print_listint - function name
 * @h: the header pointing to the first node
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
