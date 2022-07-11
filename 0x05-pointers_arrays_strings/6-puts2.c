#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  *puts2 - function that prints every other character of a string
  *@str : input string
**/

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	/*for (i = 0; str[i] != '\n' && str[i] != '\0' ; i+=2)*/
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
