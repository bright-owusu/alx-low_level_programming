#include <stdio.h>

/**
 * main - main block of code
 * Description: Print all alphabets except 'q' and 'e' in lowercase
 * using 'putchar'
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');

	return (0);
}
