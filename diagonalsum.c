#include<stdio.h>
void main()
{
	int a[3][3],i,j,sd=0,snd=0;
	printf("\nEnter Matrices Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n Matrix Is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				sd=sd+a[i][j];
			else 
			snd=snd+a[i][j];
		}
	}
	printf("\n Sum Of Diagonal Elements= %d\n",sd);
	printf("\n Sum Of Non Diagonal Elements= %d\n",snd);
}