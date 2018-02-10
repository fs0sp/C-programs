#include<stdio.h>
void main()
{		
	int i,h,item,n,a[20];
	
	printf("Enter the number of elements");
	scanf("%d",&n);
	
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the elements to be searched");
	scanf("%d",&item);
	
	for(i=0;i<n;i++)
	{
		if(a[i] = item )
		{
			printf("Element found at %d",i+1);
		}
	}	
	
	if( i = n)
	{
		printf("Element not found");
	}
}
