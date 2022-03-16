#include <stdio.h>
#include <stdlib.h>
/**
 * sum_of_multiples - Calculate the sum of multiples of 3 and 5
 *
 * Return: Returns (sum_of_multiples)
 */
int sum_of_multiples(void)
{
	int sum = 0;
	int MAXIMUM_NUMBER = 1024;
	int i = 0;

	while (i < MAXIMUM_NUMBER)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (sum);
}

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	sum_of_multiples();
	return (0);
}
