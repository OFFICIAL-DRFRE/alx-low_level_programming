#include<stdio.h>
/**
 * main - does fibonacci sequence
 * less than 4 mill
 * Return: 0 success
 */
int main(void)
{
	int limit, sum;
	int a, b, c;

	limit = 4000000;
	a = 2;
	b = 8;
	c = 34;
	sum = 10;
	
	while (c < limit)
	{
		sum += c;
		a = b;
		b = c;
		c = 4 * b + a;
	}
		
	printf("%d", sum);
	
	return (0);
}
