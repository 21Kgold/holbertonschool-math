#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers
 * @c: data with type struct complex
 * Return: void
 */
void display_complex_number(complex c)
{
	double a = c.re;
	double b = c.im;
	char s = '+';

	if (b == 0)
	{
		printf("%.0f\n", a);
	}
	if (b < 0)
	{
		s = '-';
		b = -b;
	}
	if (b == 1)
	{
		printf("%.0f %c i\n", a, s);
	}
	if (b != 0 && b != 1)
	{
		printf("%.0f %c %.0fi\n", a, s, b);
	}
}
