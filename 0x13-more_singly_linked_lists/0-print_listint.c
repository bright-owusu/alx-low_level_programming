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

	while (h)
	{
		printf("%d\n", h->n);
		nodes_printed++;
		h = h->next;
	}

	return (nodes_printed);
}
