#include<stdio.h>
void main()
{
	int x=100;
	int*p;
	p=&x;
	printf("value of x = %d\n",x);
	printf("Address of x = %u\n",&x);
	printf("value of p = %d\n",p);
	p=p+2;
	printf("value of p=%u\n",p);
}