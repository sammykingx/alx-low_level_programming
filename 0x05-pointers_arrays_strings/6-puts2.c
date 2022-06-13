#include <stdio.h>
#include "main.h"

/**
 * puts2 - function thats prints every character of a string
 * @str: pointer parameter
 * Author: Sammykingx
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
