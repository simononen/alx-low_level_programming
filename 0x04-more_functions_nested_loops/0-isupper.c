#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks for uppercase characters
 *
 * @c: int paramter checked
 *
 * Return: Always(0) Success
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
