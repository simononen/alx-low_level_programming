#include "main.h"
/**
 * puts_half - Prints half of a string
 *
 * @str: pointer parameter to stting
 *
 * Return: Nothing (void)
 */
void puts_half(char *str)
{
	int n, length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (length - 1) / 2;
		for (n = mid + 1; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
