#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *
 * Return: Returns Nothing (void)
 */
void jack_bauer(void)
{
	int p, q;

	p = 0;
	q = 0;
	while (p < 24)
	{
		while (q < 60)
		{
			_putchar(p / 10 + 48);
			_putchar(p % 10 + 48);
			_putchar(':');
			_putchar(q / 10 + 48);
			_putchar(q % 10 + 48);
			_putchar('\n');
			q++;
		}
	       p++;
	       q = 0;
	}
}
