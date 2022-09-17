#include "main.h"

/**
 * print_triangle - this function prints a triangle on the terminal
 * @size: value
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	int i;
	int j;

	for ( i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if ((i + 1) == size)
		{
			break;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
