#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
char _putchar(int c);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);


char *_memset(char *s, char b, unsigned int n);
void set_string(char **s, char *to);

/* 0x08-RECURSION */
void _puts_recursion(char *s);
#endif /* MAIN_H */
