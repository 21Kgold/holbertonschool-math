#include "holberton.h"
#include <math.h>
/**
 * division - performs the division operation to complex numbers
 * @c1: complex number dividend
 * @c2: complex number divisor
 * @c3: complex number result from division
 * Return: void
 */
void division(complex c1, complex c2, complex *c3)
{
	long d;
	d = (c2.re * c2.re) + (c2.im * c2.im);
	if (d != 0)
	{
		c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / d;
		c3->im = ((-c1.re * c2.im) + (c2.re * c1.im)) / d;
	}
	return;
}
