#ifndef MAIN_H
#define MAIN_H
/*
 *
 * File: main.h
 * Author:  Malik K Lanlokun
 * Desc: Header file containing declarations for all functions
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
