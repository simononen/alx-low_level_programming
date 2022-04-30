#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: return 1 if little endian, 0 if big endian
**/

int get_endianness(void)
{
	unsigned int q = 1;

	char *c = (char *) &q;

	return ((int)*c);
}
