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

	if (a == 0 && b == 0)
	{
		printf("\n");
	}
	else if (a == 0)
	{
		printf("%.0fi\n", b);
	}
	else if (b == 0)
	{
		printf("%.0f\n", a);
	}
	else
	{
		printf("%.0f + %.0fi\n", a, b);
	}
}
