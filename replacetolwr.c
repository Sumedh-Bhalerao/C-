#include<stdio.h>
#include<string.h>

int main()
{
	char string[100];

	printf("\nInput string to convert to lower case\n");
	gets(string);

	printf("\nInput string in lower case: %s\n",strlwr(string));

	return 0;
}