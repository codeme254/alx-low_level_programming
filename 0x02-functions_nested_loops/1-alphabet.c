#include "main.h"

/**
  *main - check the code
  *print_alphabet - function that prints alphabet lettes in lower case
  *Return: always 0
**/

void print_alphabet(void)
{
	int n;
	for(n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

int man(void)
{
	print_alphabet();
	return (0);
}
