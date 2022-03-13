#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different
 * combinations of three digits;
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);

}
