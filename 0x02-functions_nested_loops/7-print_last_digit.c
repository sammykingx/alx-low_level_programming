#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * author: sammykingx
 * Return: returns the last digit to calling function
*/
int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
		return (a);

	else
	{
		a = _abs(a % 10);
		return (a);
	}
}
