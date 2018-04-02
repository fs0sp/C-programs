#include<stdio.h>
#include<stdlib.h>
void insert(int value, int n);
void print();


int rear = -1;
int front = -1;
int n,i;
int Queue[10];

void main()
{
	
	
	int i, value;
	printf("Enter the number of Queue Element");
	scanf("%d",&n);
	
	while(i<n)
	{
		printf("Enter the element in the QUeue : ");
		scanf("%d",&value);
		insert(value,n);
		i++;
	}
	
	printf("The Queue is : \n ");
	print();
	
}

void insert(int value, int n)
{
	if(rear == n-1)
	{
		printf("UNDERFLOW");
		exit(1);
		
	}
	
	else
	{
		if(front = -1)
		{
			front  = 0;
		}
		
		rear++;
		Queue[rear] = value;
	}
}

void print()
{
	if(front == -1)
	{
		printf("Queue Empty");
	}
	
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d",Queue[i]);
			printf("\t");
		}
	}
	
}
