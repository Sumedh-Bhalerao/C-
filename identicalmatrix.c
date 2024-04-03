#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("\nEnter First Matrix Elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	} 
	printf("\nEnter Second Matrix Elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	} 	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=b[i][j])
        printf("\nMatrices Are Not Identical\n");
				return 0;
		}
    }
     for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
      {
		if(a[i][j]=b[i][j])
		printf("\nMatrices Are Identical\n");
	    return 0;
	   }
    } 
 }