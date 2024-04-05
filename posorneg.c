#include<stdio.h>
int main()
{
	/* program for positive or negative no */
	int no;
	printf("\n Enter A No:\n");
	scanf("%d",&no);
	if (no>=0)
		printf("\n Given No Is Positive\n",no);
	if(no==0)
		printf("\n Given No Is Zero")
	else
		printf("\n Given No Is Negative\n",no);
	return 0;
}