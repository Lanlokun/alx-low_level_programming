/* 
 * File: 4-free_list.c 
 * Auth: Malik K Lanlokun 
 */

#include "lists.h" 
#include <stdlib.h>

/** 
 * pop_listint -deletes the head node of a listint_t list. 
 * @head: A pointer to the list_t list. 
 */

int pop_listint(listint_t **head) 
{
	listint_t *tmp;
	int ret;

	if (head == NULL)
		return (0);

	tmp = *head; 
	ret = (*head)->n; 
	*head = (*head)->next; 
	free(tmp);

	return (ret);
}
