#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 */

int main (void)
{
int intType;
long int longType;
long long int longLongIntType;
char charType;
float floatType;
printf( "Size of a char: %lu byte(s) \n", (unsigned long)sizeof(charType));
printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof (intType));
printf("ize of a long int: %lu byte (s) \n", (unsigned long) sizeof (longType));
printf("ize of a long long int: %lu byte(s) \n", (unsigned long) sizeof (longLongIntType) );
printf("Size of a float: %lu byte (s) \n", (unsigned long)sizeof (floatType));
return (0);
}
