#include<stdio.h>
#include<stdlib.h>

void push(int);
void pop();
void print();


struct node{
	int info;
	struct node *next;
}*top, *new1, *current;

int val,i,n;

void main()
{
	printf("Enter the Number of elements : ");
	scanf("%d",&n);
	while(i<n)
	{
			
		printf("Enter the Value : ");
		scanf("%d",&val);
		push(val);
		i++;
	}
	
	print();
	
	printf("Lets Delete : \n");
	 pop(val);
	
	
}


void push(int val)
{
	
	new1 = (struct node*)malloc(sizeof(struct node));
	new1->info = val;
	new1->next = NULL;
	
	if(new1 == NULL)
	{
		top = new1;
	}
	else
	{
		new1->next = top;
		top = new1;
	}
}

void pop()
{
	if(top == NULL)
	{
		printf("UNDERFLOW");
	}
	else
	{
		current = top;
		top = top->next;
		current->next = NULL;
		free(current);
	}
	
	print();
}

void print()
{
	printf("the stack is : \n ");
	current = top;
	while(current->next!=NULL)
	{
		printf("%d\n",current->info);
		current=current->next;
	}
}

