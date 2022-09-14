/**
 *
 * File : 1-alphabet.c
 * Author : Malik K Lanlokun
 *
 */

#include "main.h"

/*
 *
 * _print_sign - checks for sign
 * @n: number to check
 * Return: 1 if > 0, 0 if zero , -1 if < 0
 */

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r +'0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
        _putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
    	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
    	_putchar('\n');

return (0);

}
