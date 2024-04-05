#include<stdio.h>
int main()
{
int i,j,k,row;
printf("Enter No Of Rows\n");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
	for(k=i;k<row;k++)
	{
		printf(" ");
	}
	for(j=1;j<=(2*i-1);j++)
	{
		printf("*");
	}
	printf("\n");
}
}