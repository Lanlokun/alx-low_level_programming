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
 	char lowerLetter;
	char upperLetter;
 	for(lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
		putchar(lowerLetter);

	putchar('\n');
	for(upperLetter = 'A'; upperLetter  <= 'Z'; upperLetter++)
		putchar(upperLetter);

	putchar('\n');

	return(0);

}

