#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 *
 * Return: 0 if the code runs successfully
 */

int positive_or_negative(void)
{
	int n;

	n = 98;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
