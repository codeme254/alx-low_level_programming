#include "main.h"

/**
  *swap_int - a function that swaps two digits
  *@a : first input
  *@b : second input
**/

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

