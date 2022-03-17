#include <stdio.h>
/**
 * print_fibonacci - prints first 50 numbers of the fibonacci sequence
 *
 * Return: (0) Always Success
 */
int print_fibonacci(void)
{
	int j, num;
	long fib1, fib2, fibn;

	j = 0;
	fib1 = 1,
	fib2 = 2;
	num = 50;

	while (j < num)
	{
		if (j == 49)
		{
			printf("%lu", fib1);
		}
		else
		{
			printf("%lu, ", fib1);
			fibn =  fib1 + fib2;
			fib1 = fib2;
			fib2 = fibn;
		}

		j++;
	}
	printf("\n");
	return (0);
}

/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{

	print_fibonacci();
	return (0);
}
