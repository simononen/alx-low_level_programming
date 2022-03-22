#include "main.h"
/**
 * swap_int - Swap value of two ints
 *
 * @a: pointer parameter to one int
 * @b: pointer parameter to second int
 *
 * Return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
