#include "main.h"

/**
 * _isdigit - this function identifies if a character is a digit or not
 *
 * @c: charcter value
 *
 * Return: 1 if it is a digit , 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
