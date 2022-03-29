#include "main.h"
/**
 * _memcpy - Copy memory area
 *
 * @dest: parameter for where to copy the memory to
 * @n: parameter for number of bytes
 * @src: parameter for memory area to copy from
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
