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

	travnode = 0;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		nodelen++;
	}
	return (nodelen);
}
