#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 *
 * @c: parameter of type int
 *
 * Return: If the islower(c) is 1 the function returns 1
 * else if the islower(c) is 0 the function returns 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
