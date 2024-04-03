#include<stdio.h>
int main()
{
	int yr;
	printf("Enter A Year\n");
	scanf("%d", &yr);
	if(yr%4 == 0 && yr%100 ==0 && yr%400 == 0)
		printf("\n IT IS A LEAP YEAR.");
	else if(yr%4 == 0 && yr%100!=0)
		printf("\n IT IS A LEAP YEAR");
	else
		printf("\n IT IS NOT A LEAP YEAR");

	return 0;
}