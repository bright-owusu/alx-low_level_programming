#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked lists
 * @h: node to prints
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_printed = 0;

	while (h != Null)
	{
		printf("%d\n", h->n);
		h = h->next;

		nodes_printed++;
	}

	return (nodes_printed);
}
