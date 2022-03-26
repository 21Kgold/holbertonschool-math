#ifndef HOLBERTON.H
#define HOLBERTON.H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct complex_num - structure to represent complex numbers
 * @a: float double
 * @b: float double
 */
typedef struct complex_num
{
	double a;
	double b;
}complex;
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);
#endif
