#include "holberton.h"
#include <math.h>
/**
 * argument - returns the argument of a given complex number
 * @c: data with type struct complex
 * Return: double type
 */
double argument(complex c)
{
	double ar;

	if (c.re != 0)
	{
		ar = atan(c.im / c.re);
		return (ar);
	}
	return (-1);
}
