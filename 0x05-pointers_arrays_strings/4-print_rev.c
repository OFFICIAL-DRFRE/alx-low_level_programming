#include "main.h"

/**
 * _strlen - get length of a string
 *
 * @s: string to get length of
 *
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
