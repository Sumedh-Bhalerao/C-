#include<stdio.h>
void main()
{
	int m[3][3],n[3][3],o[3][3],i,j;
	printf("\nEnter The First Matrix Elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
    printf("\nEnter The Second Matrix Elements:\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&n[i][j]);
    	}
    	printf("\n");
    }
        for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		o[i][j]=m[i][j] + n[i][j];
    	}
    }
    printf("\n Sum Of Matrices:\n");
        for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",o[i][j]);
    	}
    	printf("\n");
    }
}