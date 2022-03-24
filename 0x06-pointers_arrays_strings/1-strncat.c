#include "main.h"
/**
 * _strncat - Concatenate two strings
 *
 * @dest: pointer parameter to destination string
 *
 * @src: pointer parameter to source string
 *
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
