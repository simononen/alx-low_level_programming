#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int p = 0;
	int q = 0;

	while (q <= 99)
	{
		while (p <= 99)
		{
			if (p != q)
			{
				putchar(q / 10 + 48);
				putchar(q % 10 + 48);
				putchar(' ');
				putchar(p / 10 + 48);
				putchar(p % 10 + 48);
				if (!(q == 98 && p ==  99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			p++;
		}
		q++;
		p = q;
	}

	putchar('\n');

	return (0);
}
