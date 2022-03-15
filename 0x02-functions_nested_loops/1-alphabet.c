#include "main.h"
/**
 * print_alphabet - Function to print alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: No return (void)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
