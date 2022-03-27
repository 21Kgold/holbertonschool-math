#include "holberton.h"
#include <math.h>
/**
 * modulus - returns the modulus of a given complex number
 * @c: data with type struct complex
 * Return: double type
 */
double modulus(complex c)
{
	double mod;

	mod = sqrt((c.re * c.re) + (c.im * c.im));
	return (mod);
}
