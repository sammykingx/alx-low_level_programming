#include "lists.h"
/**
 * print_list - Function that prints the elements of a SLL
 * @h: a pointer to the "HEAD" of the SLL
 * Return: Returns size_t number of nodes
 * Author: sammykingx
 */
size_t print_list(const list_t *h)
{
	size_t nodelen;
	list_t *trevnode;

	if (h == NULL)
		return (1);

	else if (h->str == NULL)
		printf("[0] (nil)\n");

	else
		printf("[%lu] %s\n", h->len, h->str);

	nodelen = 0;
	trevnode = h;

	while (trevnode != NULL)
	{
		trevnode = h->next;
		nodelen++;
	}

	return (nodelen);
}
