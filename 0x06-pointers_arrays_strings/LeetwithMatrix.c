#include "main.h"

/**
 * *lt: changes the special chars
 *
 * Return: replaces the chars
 */

char *leet(char *s)
{
	int i=0, j=0;

	char lt[8][2]={{'a','4'}, {'e', '3'}, {'t', '7'}, {'l', '1'}, {'A','4'}, {'E', '3'}, {'T', '7'}, {'L', '1'} };

	while(s[i] != '\0')
	{
		for(int j=0; j<8; j++)
		{
			if(s[i] == lt[j][0])
				s[i]= lt[j][1];
		}
		i++;
    	}	
return (s);
}
