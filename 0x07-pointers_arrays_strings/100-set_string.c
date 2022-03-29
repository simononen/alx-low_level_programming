#include "main.h"
/**
 * set_string - Set the value of a pointer to a char
 *
 * @s: parameter for the pointer to change
 * @to: parameter for the value to change the pointer to
 *
 * Return: Nothing (void)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
