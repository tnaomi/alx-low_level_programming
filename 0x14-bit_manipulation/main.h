#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Print a single character*/
int _putchar(char c);
/*Convert a binary number to unsigned*/
unsigned int binary_to_uint(const char *b);
/*Print binary rep of a number*/
void print_binary(unsigned long int n);
/*Get bit at nth index*/
int get_bit(unsigned long int n, unsigned int index);
/*Set bit to 1 at nth index*/
int set_bit(unsigned long int *n, unsigned int index);
/*Set bit to 0 at nth index*/
int clear_bit(unsigned long int *n, unsigned int index);
/*Find number of bits to flip to switch numbers*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif /* MAIN.H*/
