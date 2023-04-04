#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns
 *               the head node's data.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: The head node's data, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int n;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	n = tmp_node->n;
	*head = (*head)->next;
	free(tmp_node);

	return (n);
}
