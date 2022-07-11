#include <stdio.h>

/**
  *print_rev - function that prints a string in reverse followed by a new line
  *@s : input string
**/

void print_rev(char *s)
{
	puts(strrev((const char *)s));
}

