#include<stdio.h>
int main()
{
	int arr[100];
	int size,i,tosearch,found;
	//Input Size Of Array
	printf("\nEnter Size Of Array:\n");
	scanf("%d",&size);

	//Input Elements Of Array
	printf("\nEnter Elements In Array:\n");
	for(i=0;i<size;i++)
	{
      scanf("%d",&arr[i]);
	}
	printf("\nEnter Element To Search: ");
	scanf("%d",&tosearch);
	found=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]==tosearch)
		{
			found=1;
			break;
		}
	}

if(found==1)
{
	printf("\n%d is found at position %d\n", tosearch,i+1);
}
else
{
	printf("\n%d is not found in the array",tosearch);
}
return 0;
}