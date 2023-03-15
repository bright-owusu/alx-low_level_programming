#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with c
 * @size: the size of the array
 * @c: the char that initializes the array
 *
 * Return: NULL if size is 0 or fail, pointer to array on SUCCESS
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
