#include "main.h"

/**
  * print_alphabet_x10 - function that prints 1- times the alphabet in lowercase followed by a new line
  * Return: always 0
**/

void print_alphabet_x10(void)
{
	int n, k;
	
	for (n = 1; n <= 10; n++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
