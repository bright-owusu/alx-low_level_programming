#include "lists.h"

/**
 * add_nodeint - Adds a new at the beggining of a lists
 * @head: the head of the list
 * @n: the data to add to the node
 *
 * Return: Address of the new element if SUCCESS or NULL if FAILURE
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
