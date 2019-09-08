// Write a program in C to print a string in reverse.

#include <stdio.h>
int main()
{

	char str[50];
	char reverse[50];
	char *ptr = str;
	int index = 0;
	int index2 = 0;
	

	printf("Input a string : ");
	scanf("%s",str);
	
	while(*ptr++)
	{
		index++;
	}

	while(index-- >= 0)
	{
		reverse[index] = str[index2++];
	}

	printf(" Reverse of the string is : %s\n\n",reverse);
    	return 0;

}
