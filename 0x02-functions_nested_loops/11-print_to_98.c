#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers up to 98
 * @n: int parameter
 *
 * Return: Returns Nothing (void)
 */

void print_to_98(int n)
{
	int k;
	int MAX_NUMBER = 98

	if (n <= MAX_NUMBER)
	{
		k = n;
		while (k < MAX_NUMBER)
		{
			printf("%i", k);
			k++;
		}
	}
	else
	{
		k = n;
		while (k > MAX_NUMBER)
		{
			printf("%i", k);
			k--;
		}
	}
	printf("98\n");
}

