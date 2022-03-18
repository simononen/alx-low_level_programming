#include "main.h"
/**
 *print_triangle - prints a triangle of size size.
 *
 *@size: nt parameter size of triangle.
 *
 *Return: void.
 */
void print_triangle(int size)
{
	int p, q, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (space = 1; space <= (size - p); space++)
			{
				_putchar(' ');
			}
			for (q = 1; q <= p; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
