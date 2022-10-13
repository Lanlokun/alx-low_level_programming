#ifndef MAIN_H
#define MAIN_H
/*
 *
 * File: main.h
 * Author:  Malik K Lanlokun
 * Desc: Header file containing declarations for all functions
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
