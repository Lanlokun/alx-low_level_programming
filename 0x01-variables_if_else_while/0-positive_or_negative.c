#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main has a variable n that stores a random number then  checks if the value of n is positive, negative or zero */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) 
	{
		printf("%d\n is posiitve", n);
	}
	else if(n < 0 )
	{
		printf("%d\n is negative", n);
	}
	else
       	{
		printf("%d\n is zero", n);
	}    
	return (0);
}
