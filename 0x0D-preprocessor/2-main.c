#include <stdio.h>

/**
  *main - prints the name of the file it was compiled from
  *Return: 0
  */

#define FILE_NAME __FILE__

int main()
{
	printf("%s\n", FILE_NAME);
	return (0);
}
