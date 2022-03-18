#include "main.h"
/**
 * more_numbers - print numbers from 0 to 9
 *
 * Return: Nothing (void)
 */

void more_numbers(void)
{
	int p, q;

	p = 0;
	while (p < 10)
	{
		q = 0;
		while (q < 15)
		{
			if (q >= 10)
			{
				_putchar('0' + q / 10);
			}
			_putchar('0' + q % 10);
			q++;
		}
		_putchar('\n');
		p++;
	}
}
