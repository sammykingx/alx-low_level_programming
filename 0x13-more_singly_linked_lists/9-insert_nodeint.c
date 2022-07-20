#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * 0 = 1st, 1 = 2nd, 2 = 3rd etc for the index.
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *hold = *head;
	unsigned int i = 0;

	if (!idx)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		(*new).n = n;
		(*new).next = *head;

		*head = new;

		return (*head);
	}

	while (hold)
	{
		if (i == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			(*new).n = n;
			(*new).next = (*hold).next;
			(*hold).next = new;
			return (new);
		}
		hold = (*hold).next;
		i++;
	}
	return (NULL);
}
