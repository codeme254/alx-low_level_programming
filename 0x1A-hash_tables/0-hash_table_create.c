#include "main.h"
/**
* hash_table_create - function that creates a hash table
* @size: the size of the array
* Return: pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	/*Create the hash table*/
	hash_table_t *new_table = NULL;
	/*Allocate memory for this new table*/
	new_table = malloc(sizeof(hash_table_t));
	/*Check if the memory has been successfully allocated return NULL if note*/
	if (new_table == NULL)
	{
		return (NULL);
	}
    /*If we are here, it means the memory has been allocated successfully*/
    /*Allocate memory for the array in the hash table*/
    /*The memory to be allocated should be: */
    /*size of each node/cell of the array * size of table*/
    /*Remember that each node is the head of a singly linked list*/
    /*, that is why we need a poiner*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
    /*check if the memory for the array was successfully allocated*/
    /*If not free memory that had been created for table and return null*/
	if (new_table->array == NULL)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);
	}
    /*set each table in the cell to be null*/
	while (idx < size)
	{
		new_table->array[idx] = NULL;
		idx++;
	}
    /*set the size for the new table*/
	new_table->size = size;
	return (new_table);
}
