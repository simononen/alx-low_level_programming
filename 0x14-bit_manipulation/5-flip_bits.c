#include "main.h"

/**
* flip_bits - sets bit to 0 at given index
*
* @n: parameter unsigned long int
*
* @m: parameter unsigned int
*
* Return: return 1 when bit is 1 else 0
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = 0;
	unsigned long int q = n ^ m;

	while (q)
	{
		p += (q & 1);
		(q >>= 1);
	}
	return (p);
}
