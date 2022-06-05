#include <stdio.h>

/**
 * main - Entry point
 * autor: sammy
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sammy;
	char kingx;

	for (sammy = 48; sammy < 58; sammy++)
		putchar(sammy);
	for (kingx = 'a'; kingx <= 'f'; kingx++)
		putchar(kingx);
	putchar('\n');
	return (0);
}
