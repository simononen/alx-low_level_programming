#include "main.h"
/**
 * print_last_digit - Print the last digit
 *
 * @n: parameter of type int
 *
 * Return: Returns (last_digit) the last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
