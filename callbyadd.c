#include<stdio.h>
float add(int*,int*);
void main()
{
int a,b,sum;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
sum=add(&a,&b);
printf("(%d)+(%d)=(%d)",a,b,sum);
}
float add(int *a,int *b)
{
	float sum;
	sum=*a+*b;
	return sum;
}
