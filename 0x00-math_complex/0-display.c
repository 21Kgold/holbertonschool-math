#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers
 * @c: data with type struct complex
 * Return: void
 */
void display_complex_number(complex c)
{
	int double a = c.a;
	int double b = c.b;

	if(a == 0 && b == 0)
	{
		printf("\n");
	}
	else if (a == 0)
	{
		printf("%fi\n", b);
	}
	else if (b == 0)
	{
		printf("%f\n", a);
	}
	else
	{
		printf("%f + %fi\n", a, b);
	}
}
