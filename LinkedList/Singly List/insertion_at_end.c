#include<stdio.h>
#include<stdlib.h>

void insert_list(int value);
void print_list();


struct node
{
	int info;
	struct node *next;
};

struct node *new1;
struct node *start = NULL;
struct node *last = NULL;

void insert_list(int value)
{
	new1 = (struct node*)malloc(sizeof(struct node));
	new1->info = value;
	new1->next = NULL;
	
	if(start == NULL)
	{
		last = new1;
		start = new1;
	}
	
	else {
		last->next = new1;
		last = new1;
	}
	
}

void main()
{
	int i;
	int value;  // Value to be inserted in the node
	
	while(i<4)
	{
		printf("Enter the value to be inserted : ");
		scanf("%d",&value);
		insert_list(value);
		i++;
	}
		
		printf("THE LIST IS : ");
		print_list();
	
	
	
}

void print_list()
{
	new1=start;	
	while(new1->next!=NULL)
	{
		printf("%d ",new1->info);
		new1=new1->next;
	}
	printf("%d",new1->info);
	
		
}
