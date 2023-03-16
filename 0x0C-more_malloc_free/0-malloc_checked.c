#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns a pointer to it
 * @b: integer parameter
 *
 * Return: pointer on SUCCESS, 98 on FAILURE
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
