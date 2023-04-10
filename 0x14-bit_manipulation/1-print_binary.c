#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary.
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
