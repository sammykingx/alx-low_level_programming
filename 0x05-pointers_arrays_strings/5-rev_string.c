#include <stdio.h>
#include "main.h"
/**
 * rev_string - This function reverses a string and prints on the stdout
 * @s: Pointer paramater
 * Author: sammykingx
 */

void rev_string(char *s)
{
	int i, size, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
