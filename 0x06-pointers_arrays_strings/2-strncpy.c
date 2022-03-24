#include "main.h"
/**
 * _strncpy - Copy n bytes of src to the dest string
 *
 * @dest: string parameter to copy to
 *
 * @src: string parameter copied
 *
 * @n: parameter for the largest number of bytes to copy
 *
 * Return: Address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && *(src + k))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	while (k < n)
	{
		*(dest + k) = '\0';
		k++;
	}
	return (dest);
}
