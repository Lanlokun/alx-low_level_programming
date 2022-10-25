/*
 * File: 2-add_node.c
 * Auth: Malik K Lanlokun
 */

#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at the end 
 * of a list_t list. * @head: A pointer to the head of the list_t list. 
 * @str: The string to be added to the list_t list. 
 * 
 * Return: If the function fails - NULL. 
 * Otherwise - the address of the new element. 
 */

listint_t *add_nodeint_end(listint_t **head, const int n) 
{

	listint_t *new, *last;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	
	if (*head == NULL) 
		*head = new;
	else 
	{ 
		last = *head; 
		while (last->next != NULL)
			last = last->next; 
		last->next = new;
	}

	return (*head);
}
