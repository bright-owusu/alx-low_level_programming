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

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		return (98);

	return (ptr);
}
