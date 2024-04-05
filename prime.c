#include<stdio.h>
int main()
{
	int n,i,m=0,num=0;
	printf("\nEnter A No\n");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
{
	if(n%i==0)
		printf("\nNumer Is Not Prime\n");
	num=1;
	break;
}
if(num==0)
printf("\nNumber Is Prime");
return 0;
}