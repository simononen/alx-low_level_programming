#include "main.h"
/**
 * print_times_table - prints the table n times starting from 0
 * @n : int parameter for the number of times to print
 * Return: Nothing void
 */
void print_times_table(int n)
{
	int p = 0, q, result;

	if (n < 0 || n > 15)
		return;

	while (p <= n)
	{
		for (q = 0; q <= n; q++)
		{
			result = p * q;
			if (q == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result - 100) / 10);
				_putchar('0' + result % 10);
			}
			if (q < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		p++;
	}
}
