#include <stdio.h>
/**
 * sum_even_fibonacci - calculate the sum of even fibonacci
 * numbers less than 4000000
 *
 * Return: (0) Always Success
 */
int sum_even_fibonacci(void)
{
	int MAX_FIBONACCI, sum;
	long fib1, fib2, fibn;

	fib1 = 0,
	fib2 = 1;
	fibn = 0;
	MAX_FIBONACCI = 4000000;
	sum = 0;

	while (fibn < MAX_FIBONACCI)
	{
		fibn =  fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;
		if (fibn % 2 == 0)
			sum += fibn;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * main - prints the sum of even fibonacci numbers less than 4000000
 * Return: 0
 */
int main(void)
{
	sum_even_fibonacci();
	return (0);
}
