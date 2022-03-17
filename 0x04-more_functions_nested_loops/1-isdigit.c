#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks for a digit 0 through 9
 *
 * @c: int paramter checked
 *
 * Return: Always(0) Success
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
