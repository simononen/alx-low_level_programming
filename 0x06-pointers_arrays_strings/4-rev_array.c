#include "main.h"
/**
 * reverse_array - reverese an array
 *
 * @a: pointer parameter to array
 * @n: number parameter for elements in an array
 *
 * Return: Nothing (void)
 */
void reverse_array(int *a, int n)
{
	int tmp_var, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		tmp_var = a[counter];
		a[counter++] = a[n];
		a[n--] = temp_var;
	}
}
