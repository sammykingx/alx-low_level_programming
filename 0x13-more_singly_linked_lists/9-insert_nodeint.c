#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is
 * to be added
 * @n: The integer data of the new node
 *
 * Return: The address of the new inserted
 * node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)/* checked */
		return (NULL);

	node->n = n;
	node->next = NULL;
/*
*	if (!*head && !idx)
*	{
*		*head = node;
*		return (node);
*	}
*/
	else if (!*head && idx)/* checked */
		return (NULL);

	else if (!idx) /* checked */
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
