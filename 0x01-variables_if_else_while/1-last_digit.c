#include<stdio.h>
#include<stdlib.h>

/**
 * main - point of entry
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check if the random number is greater than 5 or less than 5*/
	lastDigit = n % 10;

	if ( lastDigit > 5 )
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if ( n == 0 )
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, lastDigit);

return (0);
}
	
