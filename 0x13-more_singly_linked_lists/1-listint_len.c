#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;
	listint_t *temp = h;

	while (temp)
	{
		nodenum++;
		temp = temp->next;
	}
	return (nodenum);
}
