#include "main.h"

/**
  * print_alphabet_x10 - function that prints 1- times the alphabet in lowercase followed by a new line
  * Return: always 0
**/

void print_alphabet_x10(void)
{
	int n, k;
	
	k = 0;

	while (k < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		k++;
		_putchar('\n');
	}
}
