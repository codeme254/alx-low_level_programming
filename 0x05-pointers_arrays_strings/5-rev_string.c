#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - function that reverses a string
  *@s : input string
**/

void rev_string(char *s)
{
	int length, middle, i;

	char temp;

	length = strlen(s);

	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	/*puts((const char *)s);*/
	/*puts("%c");*/
}
