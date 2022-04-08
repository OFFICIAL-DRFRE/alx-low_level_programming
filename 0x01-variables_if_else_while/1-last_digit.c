#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - point of entry
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int n, lstDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check if the random number is greater than 5 or less than 5*/
	lstDgt = n % 10;

	if (lstDgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDgt);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstDgt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDgt);

return (0);
}
