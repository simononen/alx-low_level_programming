#include <ctype.h>
/**
 * _isalpha - checks for alphanumerical characters
 *
 * @c: parameter of type int
 *
 * Return: If the isalpha(c) is 1 the function returns 1
 * else if the islower(c) is 0 the function returns 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
