#include "fibonacci.h"
#include <math.h>
/**
 * Fibonnaci - return the Fibonnaci secuence in a sigle linked list form,
 * until having a geometric behavior with an error of 10exp-7 or less
 * Return: pointer to the first element of the linked list
 */

t_cell *Fibonnaci()
{
	t_cell *head = NULL, *new;
	int x0 = 0, x1 = 0, x2 = 1;
	double dif;

	do
	{
		if (x0 > 0)
		{
		dif = fabs(((double) (x2) / x1) - ((double) x1 / x0));
		}
		else
		{
			dif = 1;
		}
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			return (NULL);
		}
		new->elt = x2;
		new->next = head;
		head = new;
		x0 = x1;
		x1 = x2;
		x2 = (x0 + x1);
	}while (dif > 0.0000001);
	return (head);
}

/**
 * gold_number - estimate the golden number
 * @head: pointer to the first node of a linked list
 * Return: golden number
 */
double gold_number(t_cell *head)
{
	double golden;
	t_cell *node1, *node2;

	node1 = head;
	node2 = head->next;
	golden = (double) node1->elt / node2->elt;
	return (golden);
}
