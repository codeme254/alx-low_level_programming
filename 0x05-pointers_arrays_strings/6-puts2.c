#include "main.h"
#include <string.h>
/** 
  *puts2 - function that prints every other character of a string
  *@str - input string
**/

void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
