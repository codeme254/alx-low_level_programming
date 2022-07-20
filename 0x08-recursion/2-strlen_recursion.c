#include "main.h"
#include <stdio.h>

/**
  *_strlen_recursion - recursively finds the length of a string
  * @s : input string
**/

int _strlen_recursion(char *s)
{
	int count;

	count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(*s - 1);
	}
	return (count);
}
