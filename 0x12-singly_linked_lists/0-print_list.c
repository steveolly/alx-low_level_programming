#include "lists.h"

/**
 * print_list - singly list function
 * @h: the stucture for h
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	/* printf("-> %ld elements", nodes); */
	return (nodes);
}
