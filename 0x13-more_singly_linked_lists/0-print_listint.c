/* 
 * File: 0-print_listint.c 
 * Auth: Malik K Lanlokun 
 */

#include "lists.h" 
#include <stdio.h>

/** 
 * print_listint - Prints all the elements of a listint_t list. 
 * @h: The listint_t list. 
 * 
 * Return: The number of nodes in h. 
 */

size_t print_listint(const listint_t *h) 
{
	size_t nodes = 0;
	while (h)
	{
		if (h->n == 0)
			printf("[0] (nil)\n");
		else 
			printf("%d\n", h->n); 
		nodes++; 
		h = h->next;
	}

	return (nodes);
}
