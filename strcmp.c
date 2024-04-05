#include<stdio.h>
#include<string.h>
void main()
{
	char a[9],b[9];
	printf("\n Enter Your First String: \n");
	gets(a);
	printf("\n Enter Your Second String: \n");
    gets(b);
    
	if(strcmp(a,b)==0)
		printf("\nBoth Strings Are Equal\n");
	else
		printf("\nBoth Strings Are Not Equal\n");
	return 0;
}