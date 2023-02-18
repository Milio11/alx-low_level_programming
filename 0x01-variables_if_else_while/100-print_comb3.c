#include <stdio.h>

/**
 * main - print all possible different combinaison of two digits from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m = 0;

	while (m < 10)
	{
		n = 0;
		while (n < 10)
		{
			if (m != n && m < n)
			{
				putchar('0' + m);
				putchar('0' + n);
				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
