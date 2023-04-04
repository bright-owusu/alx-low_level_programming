#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL
 *
 * @head: A pointer to a pointer to the head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;

	while (*head != NULL)
	{
		curr_node = *head;
		*head = *head->next;
		free(curr_node);
	}
}
