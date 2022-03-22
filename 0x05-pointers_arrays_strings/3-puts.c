#include "main.h"
/**
 * _puts - outputs string followed by newline
 *
 * @str: pointer parameter to string
 *
 * Return: Nothing (void)
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
