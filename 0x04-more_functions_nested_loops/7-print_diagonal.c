#include "main.h"

/**
 * print_diagonal - this function prints a diagonal line on the terminal
 * followed by a new line
 * Return: 0 Always success
 */
void print_diagonal(int n)
{
	int spaces = 0;
	int lines = 0;

	if (n > 0)
	{
		while (lines < n)
		{
			while (spaces < lines)
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			spaces = 0;
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
