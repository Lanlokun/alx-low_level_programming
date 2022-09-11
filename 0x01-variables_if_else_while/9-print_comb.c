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
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		if(n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}


