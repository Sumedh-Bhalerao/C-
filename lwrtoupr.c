#include<stdio.h>
#include<conio.h>
int main()
{
	char upr,lwr;
	int ascii;
//convert to lower case

	printf("\n Enter the lower case characters:\n");
	scanf("%c",&lwr);
	ascii = lwr-32;
	printf("\n %c character in upper case is %c",lwr,ascii);

	return 0;
}