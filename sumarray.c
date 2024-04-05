#include<stdio.h>
int main()
{
	int a[20],i,n,sum=0.0,avg;
	printf("\nEnter The No Of Elements : ");
    scanf("%d",&n);
	printf("\nEnter array elements :");
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of array elements=%d\n",sum);
	for(i=0;i<n;i++);
	{
		avg = sum / n;
		printf("avg = %d",avg);
        return 0;
	}
}