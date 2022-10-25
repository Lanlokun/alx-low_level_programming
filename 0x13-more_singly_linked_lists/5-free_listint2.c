/* 
 * File: 4-free_list.c 
 * Auth: Malik K Lanlokun 
 */

#include "lists.h" 
#include <stdlib.h>

/** 
 * free_listint2 - Frees a list_t list. 
 * @head: A pointer to the list_t list. 
 */

void free_listint2(listint_t **head) 
{
	listint_t *tmp;

	if (head ==NULL)
		return;
 
	while (head) 
	{
		tmp = (*head)->next; 
		free(head); 
		*head = tmp;
	}
	
	head = NULL;
}