#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *puts_half - function that prints half of a string
  *@str : input string
**/

void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i <= len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
