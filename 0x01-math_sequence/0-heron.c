#include "heron.h"
#include <math.h>
/**
 * heron - return the heron secuence in a sigle linked list form,
 * that converges to the root of a p number until it reaches an error
 * of 10exp-7 or less
 * @p: number to be evaluated
 * @x0: first guess of the secuence
 * Return: pointer to the first element of the linked list
 */

t_cell *heron(double p, double x0)
{
	t_cell *head = NULL, *new;
	double dif;

	do
	{
		dif = fabs((x0 * x0) - p);
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			return (NULL);
		}
		new->elt = x0;
		new->next = head;
		head = new;
		x0 = (x0 + (p / x0)) / 2;
	}while (dif > 0.0000001);
	return (head);
}
