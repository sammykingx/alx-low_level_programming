#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t a = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[a])
		a++;

	new->str = strdup(str);
	new->len = a;
	new->next = *head;
	*head = new;

	return (*head);
}
