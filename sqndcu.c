#include<stdio.h>
int main()
{
	int no,ch;
	printf("\nEnter A No:\n");
	scanf("%d",&no);
	printf("\nEnter Your Choice\n1.Square\n2.Cube");
	scanf(" %d",&ch);
	switch(ch)
	{
     case 1:
     	printf("\n Square=%d\n",(no*no));
     	break;
     case 2:
     	printf("\n Cube=%d\n",(no*no*no));
     	break;
     default:
     	printf("\nINCORRECT CHOICE\n");
     	break;
	}
}