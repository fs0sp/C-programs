#include<stdio.h>

void print();
void insert(int);
void pop(int);

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
	
	printf("Want to delete?");
	pop(value);
	
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
	
	if(top = n-1)
	{
		printf("Stack Overflow");
	}
	
	int i;
	for(i=top; i>=0; i--)
	{
		
		printf("%d\n",stack[i]);
	 
	}
	
	void pop(int value)
	
	{
		if(top == -1)
		{
			printf("Stack Empty");
			
		}
		
		else 
		{
			value = stack[top];
			top--;
		}
	}
	
	
}
