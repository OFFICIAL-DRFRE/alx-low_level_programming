#include<stdio.h>
/**
 * main - does fibonacci sequence
 * less than 4 mill
 * Return: 0 success
 */
int main(void)
{
	int limit, sum;
	int a;
	int b;
	int c;

	limit = 4000000;
	a = 1;
	b = 1;
	c = a + b;

	while(c < limit)
	{
		sum += c;
		a = b + c;
		b = c + a;
		c = a + b;
	}
		printf("%d", sum);
	return (0);
}
