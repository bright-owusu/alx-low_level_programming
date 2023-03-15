#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to an allocated space in memory
 * @str: string given as a parameter
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int strLen, i;

	if (str == NULL)
		return (NULL);

	/* get the length of the string parameter */
	strLen = 0;
	while (str[strLen] != "\0")
		strLen++;

	/* allocate memory for the string */
	dup = malloc(sizeof(char) * strLen);

	/* duplicate string parameter to the new memory */
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
