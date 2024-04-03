#include<stdio.h>
float volume(int,int);
void main()
{
	int r,h;
	printf("\nEnter radius and height:\n");
	scanf("%f%f",&r,&h);
	float x=volume(r,h);
	printf("\n Volume Of Cylinder=%f",x);
}
float volume(int r,int h)
{
	return(3.14*r*r*h);
}