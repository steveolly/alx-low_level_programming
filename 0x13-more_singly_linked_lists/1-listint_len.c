#include "lists.h"

/**
 * listint_len - function name
 * @h: nodes header
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
