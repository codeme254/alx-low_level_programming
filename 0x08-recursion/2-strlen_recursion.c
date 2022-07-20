#include "main.h"
#include <stdio.h>

/**
  *_strlen_recursion - recursively finds the length of a string
  * @s : input string
  *return : the length of the string input
**/

int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
