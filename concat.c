#include<stdio.h>
#include<string.h>
void concat (char[],char[]);
int main()
{
	char a[50],b[50];
	printf("\nEnter First String:\n");
	gets(a);
	printf("\nEnter Second String:\n");
	gets(b);
	concat(a,b);
	printf("\nConcated String Is:%s",a);
	return 0;
}
void concat(char a[], char b[])
{
	int i,j;
	i=strlen(a);
	for(j=0; b[j]!='\0';i++,j++)
		a[i] = b[j];
	a[i] = '\0';
}
