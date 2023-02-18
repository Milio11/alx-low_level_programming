#include <stdio.h>

/**
 * main - print all possible different combinaison of two digits from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 9 and m == 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
