#include "holberton.h"
#include <math.h>
/**
 * addition - performs the addition operation to complex numbers
 * @c1: complex number to be added
 * @c2: complex number to be added
 * @c3: complex number result from addition
 * Return: double type
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
