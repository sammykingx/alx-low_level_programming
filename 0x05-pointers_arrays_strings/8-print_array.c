#include <stdio.h>
#include "main.h"

/**
 * print_array - this function prints n elements of an array of integers.
 * @a: pointer parameter
 * @n: integer variable
 * Author: sammykingx
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
