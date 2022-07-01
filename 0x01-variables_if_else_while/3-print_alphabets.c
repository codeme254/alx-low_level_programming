#include <stdio.h>

/**
  *main - entry point
  *Return: Always 0 (success)
 **/

int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
