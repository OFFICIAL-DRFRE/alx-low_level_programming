#include<stdio.h>
/**
 * main does fibonacci sequence
 * less than 4 mill
 */
int main(void)
{
	int limit;
	int a;
	int b;
	int c;

	limit=4000000;
	a=1;
	b=1;
	c=a+b;

	while(c < limit)
	{
		sum += c;
		a = b + c;
		b = c + a;
		c = a + b;
		print (sum);
	}
return (0);
}
