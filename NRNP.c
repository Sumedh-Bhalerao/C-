#include<stdio.h>
void volume();
void main()
{
	volume();
}
void volume()
{
	const float PI=3.14159265359;
	float r,h, volume;
	printf("Enter Radius And Height Of The Cylinder:\n");
	scanf("%f%f",&r,&h);
    printf("Volume Of Cylinder:%f\n",volume=PI*r*r*h);
	return 0;
}
