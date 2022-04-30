#include "main.h"

/**
* set_bit - is a function set 1 at index bit position of a number
*
* @n: is unsigned long int number
*
* @index: is an unsigned int
*
* Return: Always return 1 success and 0 for failer
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	num = (1 << index);
	*n = *n | num;
	return (1);
}
