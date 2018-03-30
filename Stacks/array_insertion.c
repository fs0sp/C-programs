#include<stdio.h>

void print();
void insert(int);

int stack[20], top = -1;

int n;

void main()
{
	
	
	int i,value;
	
	printf("Enter the number of elements in the stack");
	scanf("%d",&n);
	
	while(i<n)
	{
		printf("Enter the element : ");
		scanf("%d",&value);
		insert(value);
		i++;
	}
	
	
	printf("The Stack elements are : ");
	print();
	
	
}

void insert(int value)
{
	if(top == n-1)
	{
		printf("Underflow");
	}
	
	else 
	{
		top++;
		stack[top] = value;
		
	}
	
}

void print()
{
	int i;
	for(i=top; i>=0; i--)
	{
		
		printf("%d\n",stack[i]);
	 
	}
}
