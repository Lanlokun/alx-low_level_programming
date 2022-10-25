/* 
 * File: 0-print_list.c 
 * Auth: Malik K Lanlokun 
 */

#include "lists.h" 
#include <stdio.h>

/** 
 * listint_len - Prints all the elements of a list_t list. 
 * @h: The listint_t list. 
 * 
 * Return: The number of elements in a linked list 
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		nodes++; 
		h = h->next;
	}

	return (nodes);
}
