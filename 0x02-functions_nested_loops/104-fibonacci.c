#include <stdio.h>

/**
 * print_fibonacci_98 - Print fibonacci numbers from 1 up to 98
 *
 * Return: Nothing (void)
 */
void print_fibonacci_98(void)
{
	unsigned long int fibo_1, fibo_2, fibo_n;
	int j, MAX_NUMBER;

	MAX_NUMBER = 98;
	fibo_1 = 1;
	fibo_2 = 2;
	j = 1;
	while (j <= MAX_NUMBER)
	{
		if (j == MAX_NUMBER)
		{
			printf("%lu", fibo_2);
		}
		else
		{
			printf("%lu, ", fibo_1);
			fibo_n = fibo_1 + fibo_2;
			fibo_1 = fibo_2;
			fibo_2 = fibo_n;
		}
		j++;
	}
	printf("\n");
}

/**
 * main - prints fibonnaci numbers
 *
 * Description: prints first 98 fibonacci
 * Return: Always(0) Success
 */

int main(void)
{

	print_fibonacci_98();
	return (0);
}
