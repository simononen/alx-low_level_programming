#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i != j && (i != '9' && j != '0') && !(i != '0' && j == '1'))
			{
				putchar(i);
				putchar(j);
				if (!((i == '8') && (j == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '1';
		i++;
	}
	putchar('\n');
	return (0);
}
