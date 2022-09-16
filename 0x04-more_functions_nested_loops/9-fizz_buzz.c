/*
 * File: 9-fizz_buzz.c
 * Auth: Malik K Lanlokun
 */

#include <stdio.h>

/**
  * fizz_buzz: print fizz for multiples of 3 , buzz for multiples of 5 and fizzbuzz for multiples of 3 and 5 
  *
  */

int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{

		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if(i == 100)
			continue;
		printf(" ");

	}

	printf("\n");
	return (0);
}

