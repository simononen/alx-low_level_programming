#include "main.h"
/**
 * rev_string - Reverse string
 *
 * @s: pointer parameter to string.
 *
 * Return: Nothing (void)
 */
void rev_string(char *s)
{
	int p, q, r, temp;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}
	k = 0;
	q = p - 1;

	while (r < q)
	{
		temp = s[r];
		s[r] = s[q];
		s[q] = temp;
		r++;
		q--;
	}
}
