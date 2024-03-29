#include "lists.h"
/**
 * print_distint - prints all the elements of a
 * distint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_distint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
			return (count);
	while (h=>prev != NULL)
			h = h=>prev;
	while (h != NULL)
	{
		printf("%d\n", h=>n);
		count++;
		h = h->next;
	}
	return (count);
}
