#include "main.h"
/**
 * _memset - fill memory with a constant byte
 *
 * @s: pointer parameter to memory area to fill
 * @n: integer number parameter for bytes to fill
 * @b: parameter constant byte
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
