#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generate random valid password
 * Return: Always (0) (on success)
 *
 */
int main(void)
{
	int passwd, total;

	srand(time(NULL));
	total = 0;
	while (total <= 2645)
	{
		passwd = (rand() % 128);
		total += passwd;
		printf("%c", passwd);
	}
	printf("%c", 2772 - total);

	return (0);
}
