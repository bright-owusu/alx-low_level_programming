#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer on SUCCESS, NULL on FAILURE
 */
char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int strLen1, strLen2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strLen1 = strLen2 = 0;
	while (s1[strLen1] != '\0')
		strLen1++;
	while (s2[strLen2] != '\0')
		strLen2++;
	concatStr = malloc(sizeof(char) * (strLen1 + strLen2) + 1);
	if (concatStr == NULL)
		return (NULL);
	strLen1 = strLen2 = 0;
	while (s1[strLen1] != '\0')
	{
		concatStr[strLen1] = s1[strLen1];
		strLen1++;
	}
	while (s2[strLen2] != '\0')
	{
		concatStr[strLen1] = s2[strLen2];
		strLen1++, strLen2++;
	}
	concatStr[strLen1] = '\0';
	return (concatStr);
}
