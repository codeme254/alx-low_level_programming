#include "main.h"
#include <stdio.h>

/**
  * _print_rev_recursion - function that prints string in reverse
  *@s : input string
**/

void _print_rev_recursion(char *s)
{
	print_reverse(s + 1);
	putchar(s);
}

