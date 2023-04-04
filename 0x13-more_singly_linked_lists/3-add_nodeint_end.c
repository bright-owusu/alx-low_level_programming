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
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (*head->next != NULL)
		{
			*head = *head->next;
		}

		*head->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
