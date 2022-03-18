#include "main.h"
/**
 * print_diagonal - print characters to foem diagonal
 *
 * @n: int parameter for number of characters
 *
 * Return: Nothing (void)
 */

void print_diagonal(int n)
{
	int i;
	int spacer;
	int num_of_chars;

	num_of_chars = n;

	if (num_of_chars <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < num_of_chars)
		{
			spacer = 0;
			while (spacer < i)
			{
				_putchar(' ');
				spacer++;
			}
			i++;
			_putchar(92);
			_putchar('\n');
		}
	}
}
