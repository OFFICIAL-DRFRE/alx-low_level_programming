#include <stdio.h>
/**
 * main - 98 seq of fibonacci
 * Return: 0
 */
int main(void)
{
	int f1 = 0, f2 = 1, i, n=98, next;
	
	printf("%d ,",f1);
	for (i = 1; i < n; i++) 
	{
		printf("%d ,", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;

	}
return (0);
}
