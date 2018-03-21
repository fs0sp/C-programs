#include<stdio.h>

void main()
{
	int i,sum=0;
	
	
	struct node {
		int info;
		struct node *next;
	};
	
	struct node *new1;
	
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&new1[i].info);
	}
	
	
	printf(" \n \n ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",new1[i].info);
	}
	
	printf(" \n \n ");
	
	printf("The sum of nodes is : ");
	
	for(i=0;i<5;i++)
	{
		sum = sum + new1[i].info;
	}
	
	printf("%d",sum);
	
	
}
