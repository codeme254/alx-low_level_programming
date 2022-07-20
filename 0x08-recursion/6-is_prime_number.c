#include "main.h"
/**
  *is_prime_number - function that check if a number is prime
  *@n : input digit
  *Return: 0 success
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (is_prime_number(n, n/2) > 0)
		return (1);
	return (0);
}
