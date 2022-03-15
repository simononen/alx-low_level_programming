#include "main.h"

/**
 * print_alphabet_x10 - Function to print lowercase alphabets
 * 10 times on different lines
 *
 * Return: Nothing is returned (void)
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		print_alphabet();
		counter++;
		_putchar('\n');
	}
}

/**
 * print_alphabet - Function to print lowercase alphabets
 *
 * Return: Nothing is returned (void)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
