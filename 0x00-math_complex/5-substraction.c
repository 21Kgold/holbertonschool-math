#include "holberton.h"
#include <math.h>
/**
 * substraction - performs the substraction operation to complex numbers
 * @c1: complex number
 * @c2: complex number to substracted from c1
 * @c3: complex number result from substraction
 * Return: void
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
