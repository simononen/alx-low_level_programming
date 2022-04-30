#include "main.h"

/*
 * binary_to_uint - convert a binary to an unsigned int
 * 
 * @b: parameter
 * 
 * Return: Always converted number (num)
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
		else
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
	}
	return (num);
}

