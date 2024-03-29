#include "lists.h"

/**
 * add_nodeint_end - Adds new node at end of list
 * @head: First node in list
 * @n: Data to add to node
 *
 * Return: Address of new node if SUCCESS or NULL if FAILURE
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	return (new_node);
}
