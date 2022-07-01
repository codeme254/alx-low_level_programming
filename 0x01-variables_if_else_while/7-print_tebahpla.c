#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *Return: Always 0 (Success)
 **/

int main(void)
{
	for (int x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}


