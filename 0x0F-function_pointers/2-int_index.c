/* 
 * File: 0-print_name.c 
 * Auth: Malik K Lanlokun
 */

#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: The array to search from
 * @size: size of array
 * @*cmp: pointer function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index; 

	if (array == NULL || cmp == NULL) 
		return (-1); 

	for (index = 0; index < size; index++) 
	{
		if (cmp(array[index]) != 0) 
		return (index);
	}
	return (-1);
}
