#include<stdio.h>
int main()
{
	int m;
	printf("\nEnter Your Marks:\n");
    scanf("%d",&m);
    if(m>=70)
    	printf("\nYou Got Grade A",m);
    else if(m<70 && m>=60)
    	printf("\n You Got Grade B+",m);
    else if(m<60 && m>=45)
    	printf("\n You Got Grade B",m);
    else if (m<45 && m>=35)
    	printf("\n You Got Grade C",m);
    else
    	printf("\nFAIL\n");

}