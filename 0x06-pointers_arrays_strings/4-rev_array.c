#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int i;

	int opp_i;

	int tmp;

	for (i = 0; i < (n / 2); i++)

	{

		/* swap elements in opposite positions */

		opp_i = n - (i + 1);

		tmp = a[i];

		a[i] = a[opp_i];

		a[opp_i] = tmp;

	}

}
