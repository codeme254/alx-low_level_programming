#include "main.h"
#include <string.h>
/** 
  *puts2 - function that prints every other character of a string
  *@str - input string
**/

void puts2(char *str)
{
	int i;
	
	for (int i = 0; i < strlen(str); i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
