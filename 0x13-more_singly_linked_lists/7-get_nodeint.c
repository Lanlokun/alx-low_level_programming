/* 
 * File: 4-free_list.c 
 * Auth: Malik K Lanlokun 
 */

#include "lists.h" 
#include <stdlib.h>

/** 
 * get_nodeint_at_index -deletes the head node of a listint_t list. 
 * @head: A pointer to the list_t list. 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) 
{
	unsigned int node; 

	for (node = 0; node < index; node++) 
	{ 
		if (head == NULL) 
		return (NULL);

		head = head->next;
	}

	return (head);
}
