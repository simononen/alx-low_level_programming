#include <ctype.h>
/*
 * _islower - Check for lowercase characters
 *
 * Return: Always (0) Success
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return (0);
}
