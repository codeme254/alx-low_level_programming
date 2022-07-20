#include "main.h"
/**
  *is_prime_number - function that check if a number is prime
  *@n : input digit
  *Return: 0 success
 **/

int is_prime_number(int n)
{
	int i;
	int counter;

	if (n <= 1)
		return (0);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			counter++;
		}
	}
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
