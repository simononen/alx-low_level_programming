#include <stdio.h>
/**
 * sum_even_fibonacci - calculate the sum of even fibonacci
 * numbers less than 4000000
 *
 * Return: (0) Always Success
 */
int sum_even_fibonacci(void)
{
	int j, MAX_FIBONACCI, sum;
	long fib1, fib2, fibn;

	j = 0;
	fib1 = 1,
	fib2 = 2;
	MAX_FIBONACCI = 4000000;
	sum = 0;

	while (j < MAX_FIBONACCI)
	{
		fibn =  fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;
		(fibn % 2 == 0) ? sum += fibn : ' ';
		j++;
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
