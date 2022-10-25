#ifndef MAIN_H
#define MAIN_H
/*
 *
 * File: main.h
 * Author:  Malik K Lanlokun
 * Desc: Header file containing declarations for all functions
 */


#include <stdlib.h>




/** 
 * struct list_s - singly linked list 
 * @str: string - (malloc'ed string) 
 * @len: length of the string 
 * @next: points to the next node 
 * 
 * Description: singly linked list node structure 
 * for Alx project
 */




typedef struct listint_s 
{ 
	int n; 
	struct listint_s *next;

} listint_t;


size_t print_listint(const listint_t *h); 
size_t listint_len(const listint_t *h); 
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
#endif