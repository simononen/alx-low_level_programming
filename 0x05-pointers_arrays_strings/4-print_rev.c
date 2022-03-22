#include "main.h"
/**
 * print_rev - Prints string in reverse order
 *
 * @s: pointer parameter to string
 *
 * Return: Nothing (void)
 */
void print_rev(char *s)
{
	int string_length, last;

	string_length = 0;
	while (s[string_length] != '\0')
	{
		string_length++;
	}

	last = string_length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
