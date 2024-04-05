#include<stdio.h>
int main()
{
	int m,n,sum=0;
	printf("Enter Any Number\n");
	scanf("%d",&n);
	for(m=2;m<=n;m+=2)
	{
		sum+=m;
	}
	printf("sum of all even numbers from 1 to %d: %d\n",n,sum);
	return 0;
}