/*
 * File : 2-print alphabet.c
 * Author : Malik K Lanlokun
*/

#include <stdio.h>

/**
  * main  - Print letters of the alphabet in lowercase
  *
  * Return: Always 0.
*/

int main(void)
{
 	char letter;
 	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return(0);

} 

