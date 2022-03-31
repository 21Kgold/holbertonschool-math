#include "heron.h"
/**
 * heron - return the heron secuence in a sigle linked list form,
 * that converges to the root of a p number
 * @p: number to be evaluated
 * @x0: first guess of the secuence
 * Return: pointer to the first element of the linked list
 */

t_cell *heron(double p, double x0)
{
	t_cell *head = NULL, *new, *temp = NULL;
	int i = 0;
	double dif;

	do
	{
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			return (NULL);
		}
		if (temp != NULL)
		{
			temp->next = new;
		}
		new->elt = x0;
		new->next = NULL;
		temp = new;
		x0 = (x0 + (p / x0)) / 2;
		dif = (x0 * x0) - p;
		if (i == 0)
		{
			head = new;
		}
		i++;
	}while((dif > 0.0000001) || ((dif * -1) > 0.0000001));
	return (head);
}
