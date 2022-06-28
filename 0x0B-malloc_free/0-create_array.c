#include <stdlib.h>
#include "main.h"
/**
 * crete_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: the string
 * Author: Sammykingx
 * Return: 0 means success except defined otherwise
 */

char *create_array(unsigned int size, char c)
{
	if ( size == 0)
		return (NULL);

	char *memloc = (char *)malloc(size * sizeof(char));

	if (memloc == NULL);
		return (NULL);

	return (memloc);
}
