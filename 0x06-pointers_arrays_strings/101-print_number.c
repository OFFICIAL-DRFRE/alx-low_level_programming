#include "main.h"

/**
 * Print_number: print the numbers with putchar
 *only use _putchar to print
* not allowed to use long
* not allowed to use arrays/pointers
* not allowed to hard-code special values
* Return: Always 0
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
