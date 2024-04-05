#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[20],temp;
	int i,length;
	printf("\nEnter String:\n");
	scanf("%s",str);

	length=strlen(str)-1;

	for(i=0;i<strlen(str)/2;i++)
	{
		temp=str[i];
		str[i]=str[length];
		str[length--]=temp;
	}
	printf("\nReverse string is:%s\n", str);
	getch();
}