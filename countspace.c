#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	int i;
	int space=0;
	printf("\nEnter a string\n");
	gets(str);

	for(i=0;str[i]!='\0';i++) 
	{
		if(str[i]=' ')
		{
			space++;
		}
	}
printf("\nTotal white space:%d\n",space);
}