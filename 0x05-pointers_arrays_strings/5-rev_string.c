#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - function that reverses a string
  *@s : input string
**/

void rev_string(char *s)
{
	/*int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}*/
	int i;
	char c;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		c = str[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	puts((const char *)s);
}

