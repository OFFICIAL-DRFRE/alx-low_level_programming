#include <stdio.h>
/**
 * main - 98 seq of fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2;
	int i, n = 98, next;

	printf("%lu ,", f1);
	for (i = 1; i <= n; i++)
	{
		printf("%lu ,", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;

	}
return (0);
}
