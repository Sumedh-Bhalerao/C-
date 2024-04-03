#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	printf("\nEnter First Matrix Elements:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d\n",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n Enter Second Matrix Elements:\n");
	for (int i = 0; i < 3; ++i)
	{
	 for (int j = 0; j < 3; ++j)
	 {
	 	scanf("%d\n",&b[i][j]);
	 }
	 printf("\n");
	}
	for(i=0;i<3;++i)
	{
		for (int j = 0; j < 3; ++j)
		{
		 for(k=0;k<3;++k)
		 {
		 	sum=sum+a[i][k]*b[k][j];
		 }
		 c[i][j]=sum;
		 sum=0;
		}
	}
		printf("\n Multiplicatiom Is\n");
          for (int i = 0; i < 3; ++i)
          {
           for (int j = 0; j < 3; ++j)
           {
           printf("%d\t",c[i][j]);
           }
           printf("\n");
          }
	}
