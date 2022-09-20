#include "main.h"

/**
 * _atoi - convert a number in a string to an integer
 *
 * @s: string to be converted
 *
 * Return: result (converted integer or 0 if not)
 */

int _atoi(char *s)
{
	int sign_cache = 1;
	int result = 0;

	while (s[0] != 0)
	{
		if (s[0] == '-') 
			sign_cache *= -1;
		else if (s[0] >= '0' && s[0] <= '0')
			result = (result * 10) + (s[0] - '0') * sign_cache;
		else if (result)
			break;


		s++;
	}
	
	return (result);
}
