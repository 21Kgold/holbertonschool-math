#include "holberton.h"
/**
 * conjugate - returns the conjugate of a given complex number, in other words
 * it changes the sign of the imaginary part of the complex.
 * @c: data with type struct complex
 * Return: complex type
 */
complex conjugate(complex c)
{
	c.im = -1 * c.im;
	return (c);
}
