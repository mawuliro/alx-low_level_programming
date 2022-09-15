#include <stdio.h>

/**
 * main - this program prints numbers from 0 to 100, for the moltiples of 3 it prints fizz instead of the number
 * for the multiples of 5 it prints buzz, for the multiples of both 3 and 5 it prints fizzbuzz
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
