/* 
 * File: 0-print_name.c 
 * Auth: Malik K Lanlokun
 */

#include "function_pointers.h"
/** 
 * print_name - Prints a name. 
 * @name: The name to be printed. 
 * @f: A pointer to a function that prints a name. 
 */

void array_iterator(int *array, size_t size, void (*action)(int)) 
{ 
	if (array == NULL || action == NULL) 
		return;
	
	while (size-- > 0) 
	{ 
		action(*array); 
		array++;
	}
}
