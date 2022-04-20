#include "main.h"

/**
 * Print_number: print the numbers with putchar
 * You can only use _putchar function to print
* You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values
* Return: Always 0
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
