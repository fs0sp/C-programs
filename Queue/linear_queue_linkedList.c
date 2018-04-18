#include<stdio.h>
#include<stdlib.h>

void print_list();
void insert_list(int, int);

struct node{
	int info;
	struct node *next;
};

struct node *new1;


int i,val,n;
int front = -1;
int rear = -1;



void main()
{
	printf("Enter the elements you want in the Queue : ");
	scanf("%d",&n);
	
	while(i<n)
	{
		printf("Enter the Queue Items");
		scanf("%d",&val);
		insert_list(val,n);
		i++;
	}
}

void insert_list( int val, int n)
{
	if(rear == n-1)
	{
		printf("OVERFLOW");
		exit(1);
		
	}
	
	if(front = -1)
	{
		front = 0;
	}
	
	else
	{
		rear++;
		new1->next = val;
	}
	
}


void print_list()
{
	
	if(front == -1)
	{
		printf("Queue Empty");
	}
	else
	{
	
	
		for(i=front;i<=rear;i++)
		{
			printf("%d \n ",new1->info );
			
		}
	
	}
}



