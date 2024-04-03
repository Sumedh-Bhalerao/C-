#include<stdio.h>
 int volume();
void main()
{
	int x=volume();
	printf("volume of cylinder=%d\n",x);
}
int volume()
{
	int r,h;
    printf("Enter radius and height\n");
	scanf("%d%d",&r,&h);
	return(3.14*r*r*h);
}