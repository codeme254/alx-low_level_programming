#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - function that reverses a string
  *@s : input string
**/

void rev_string(char *s)
{
	if (*s)
	{
		rev_string(s+1);
		putchar(*s);
	}
}

