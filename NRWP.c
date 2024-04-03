#include<stdio.h>
void volume(int,int);
void main()
{
	int r,h;
	printf("\nEnter radius and height:\n");
	scanf("%d%d",&r,&h);
	volume(r,h);
}
void volume(int r,int h)
{
	printf("\n Volume Of Cylinder=%d",(3.14*r*r*h));
}
