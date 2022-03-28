#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - calculates the complex number
 * @m: module of a complex number
 * @arg: argument of a complex number
 * @c3: complex number calculated from module and argument
 * Return: void
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
