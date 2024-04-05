#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf ("\nEnter Two Int\n ");
	scanf("%d%d",&a,&b);
	printf("\nEnter Your Choice\n+.Add\n-.Sub\n*.Mult\n/.Div");
	scanf(" %c",&ch);
	switch(ch)
	{
	case '+':
		printf("\nSum=%d\n",(a+b));
		break;
	case '-':
		printf("\nSub=%d\n",(a-b));
		break;
	case '*':
		printf("\nMult=%d\n",(a*b));
		break;
	case '/':
		printf("\nDiv=%d\n",(a/b));
		break;
		default:
		printf("\nIncorrect Choice\n");
		break;
	}
}