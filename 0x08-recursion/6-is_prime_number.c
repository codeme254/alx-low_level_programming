#include "main.h"
/**
  *is_prime_number - function that check if a number is prime
  *@n : input digit
  *Return: 0 success
 **/

int is_prime_number(int n)
{
	int is_prime(int dig, int i = 2)
	{
		number = n;
		if (number <= 2)
			return (n == 2 ? 1 : 0);
		if (number % 1 == 0)
			return (0);
		if (i * i > n)
			return (1);
		return is_prime(number, i + 1);
	}
}
