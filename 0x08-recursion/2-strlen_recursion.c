#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
