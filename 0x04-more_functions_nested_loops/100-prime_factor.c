#include <stdio.h>
/**
 * print_largest_prime_factor - Print largest prime factor
 *
 * Return: Nothing (void)
 */
void print_largest_prime_factor(void)
{
	long int x, i, prime_factor;

	prime_factor = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pf = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			pf = i;
			x = x / i;
		}
	}
	if (x > 2)
		pf = x;

	printf("%ld\n", pf);
}

/**
 * main - Entry point
 *
 * Return: Always(0)
 */
int main(void)
{
	print_largest_prime_factor();
	return (0);
}
