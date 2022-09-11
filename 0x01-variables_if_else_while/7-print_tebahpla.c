/*
 * File : 5-print numbers.c
 * Author : Malik K LANLOKUN
 *
*/

#include <stdio.h>
/**
  * main - prints all single digit numbers of base 10 starting from 0
  *
  * Return: Always 0.
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}


