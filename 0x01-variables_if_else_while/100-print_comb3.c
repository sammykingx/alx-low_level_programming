#include <stdio.h>
/**
 * main - Entry point
 * author: sammykingx
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int j;

	for (a = 48; a < 58; a++)
	{
		for (j = 48; j < 58; j++)
		{
			if (a != j && a < j)
			{
				putchar(a);
				putchar(j);
				if (j == 57 && a == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
