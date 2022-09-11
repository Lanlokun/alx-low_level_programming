/*
 * File : 4-print alphabet.c
 * Author : Malik K LANLOKUN
 *
*/

#include <stdio.h>

/**
  * main - Print lower alaphabet letters except letter  and e
  *
  * Return: Always 0.
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		while (letter == 'q' || letter == 'e')
		{
			letter++;
		}

		putchar(letter);
	}
	putchar('\n');

	return (0);
}


