#include <stdio.h>

/**
 * main - Entry point
 * author:sammy
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sammy;

	for (sammy = 48; sammy < 58; sammy++)
	{
		putchar(sammy);
		if (sammy != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
