#include "main.h"
/**
 * print_sign - checks for sign(+/-) characters and prints
 *
 * @n: parameter of type int
 *
 * Return: Prints sign and return the corresponding value
 * either 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
