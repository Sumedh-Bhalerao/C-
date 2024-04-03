#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter no of rows:\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1 || i==rows || j==1 || j==i)
			{
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
}