/**
 *
 * File : 6-abs.c
 * Author : Malik K Lanlokun
 *
 */

#include "main.h"

/*
 *
 * print_last_digit - checks for sign
 * @n: number to check
 * Return: last digit of number
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
   	_putchar('\n');

	return (0);
}
