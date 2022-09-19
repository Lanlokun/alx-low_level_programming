/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
*/

#include "main.h"
/**
 * _swap_int - swaps the values of two integers. 
 *
 * @a: variable to swap
 * @b: variable to swap
 *
 */

void swap_int(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
