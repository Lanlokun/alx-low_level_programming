#include "main.h"

/**
  * File: 3-print_numbers.c
  *
  * Author: Malik K Lanlokun
  */

void print_numbers(void)
{
	int i;

	i = 0;

	while(i < 10)
	{
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
