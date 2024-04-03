#include<stdio.h>
int main(void)
{
	int i,j,n=3,c=n-1,rows;
	printf("\nEnter The No Of Rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		if(i%2==0)
			printf("%d",c++);
		for(j=1;j<=n;j++)
		{
			printf("%d",i);
		}
		if(i%2!=0)
		printf("%d",c++);
		printf("\n");
	}
	return 0;
}