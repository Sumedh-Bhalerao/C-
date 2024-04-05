#include<stdio.h>
#include<conio.h>
int main()
{
	char upr,lwr;
	int ascii;

	//convert to lower case

	printf("Enter the upper case characters:\n");
	scanf("%c",&upr);
	ascii = upr + 32;
	printf("\n %c character in lower case is %c",upr,ascii);
}