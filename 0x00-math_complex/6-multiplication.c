#include "holberton.h"
#include <math.h>
/**
 * multiplication - performs the multiplication operation to complex numbers
 * @c1: complex number to be multiply
 * @c2: complex number to be multiply
 * @c3: complex number result from multiplication
 * Return: void
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c2.re * c1.im);
}
