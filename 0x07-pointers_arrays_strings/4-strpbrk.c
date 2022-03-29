#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - Searchs string for any of a set of bytes
 *
 * @s: parameter for the string to search
 * @accept: parameter for the bytes to search for
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}