/*
 * File : 2-print alphabet.c
 * Author : Malik K Lanlokun
*/

#include <stdio.h>
#include <ctype.h>
/**
  * main  - Print letters of the alphabet in lowercase
  *
  * Return: Always 0.
*/

int main(void)
{
 	char lowerLetter;

 	for(lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
	{
		putchar(lowerLetter);
	}

	for(lowerLetter = 'A'; lowerLetter <= 'Z'; lowerLetter++)
	{
		putchar(lowerLetter);
	}

	putchar('\n');

	return(0);

}

