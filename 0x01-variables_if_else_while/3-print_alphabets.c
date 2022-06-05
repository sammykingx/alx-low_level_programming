#include <stdio.h>

/**
 * main - Entry point
 * author: sammykingx
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sam;
	char kingx;

	for (; sam <= 'z'; sam++)
		putchar(sam);
	for (; kingx <= 'Z'; kingx++)
		putchar(kingx);
	putchar('\n');
	return (0);
}
