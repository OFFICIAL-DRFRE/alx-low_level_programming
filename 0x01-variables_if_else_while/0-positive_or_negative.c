#include<stdio.h>
#include<time.h>

/**
 * main - point of entry
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check if the random number is positive or negative*/
	if ( n > 0 )
		printf("%d is positive\n", n);
	else if ( n == 0 )
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
return (0);
}
	
