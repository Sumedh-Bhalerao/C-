#include<stdio.h>
int factorial(int);
void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	int x= factorial(a);
	printf("Factorial of %d is %d\n",a,x);
}
int factorial(int a)
{
	if (a==1 || a==0)
		return 1;
	else 
	return a*(factorial(a-1));
}