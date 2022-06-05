#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char sam;

	for (sam = 'a'; sam <= 'z'; sam++)
	{
		putchar(sam);
	}
	putchar('\n');
	return (0);
}
