#include "main.h"
/**
 * *leet: changes the special chars
 *
 * Return: replaces the chars
 */

char *leet(char *str)
{
	int i=0, j=0;

	char leet[8][2]={{'a','4'}, {'e', '3'}, {'t', '7'}, {'l', '1'}, {'A','4'}, {'E', '3'}, {'T', '7'}, {'L', '1'} };

	while(str[i] != '\0')
	{
		for(int j=0; j<8; j++)
		{
			if(str[i] == leet[j][0])
				str[i]= leet[j][1];
		}
		i++;
    	}	
return (str);
}
