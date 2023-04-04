#include "lists.h"

/**
 * listint_len -  A function that returns the number of elements
 * @h: the head of the linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);
}
