#include "function_pointers.h"
/**
  *array_iterator - executes a func given as parameter on each element of arr
  *@array: array of integers
  *@size: size of array
  *@action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
