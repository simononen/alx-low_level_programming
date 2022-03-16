#include "main.h"
/**
 * print_to_98 - Print numbers up to 98
 * @n: int parameter
 *
 * Return: Returns Nothing (void)
 */
void print_to_98(int n)
{
	int final_number = 98;

	if (n < final_number)
	{
		for (; n <= final_number; n++)
		{
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				break;
			}
			else
			{
				if (n >= -9 && n <= 9)
				{
					if (n < 0)
					{
						_putchar('-');
						_putchar((n * -1) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (n >= 0)
					{
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (n >= 100)
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else
	{
		for (; n >= final_number; n--)
		{
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				break;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;
}
