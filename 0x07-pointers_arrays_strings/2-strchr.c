#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locate character in string
 *
 * @s: parameter for string to check
 * @c: parameter for character we're looking for
 *
 * Return: Pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
