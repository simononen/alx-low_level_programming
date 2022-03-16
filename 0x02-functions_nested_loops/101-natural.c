#include "main.h"
#include <stdio.h>
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
	printf("The sum of multiples of 3 or 5 is: %d\n", sum);
	return (sum);
}
