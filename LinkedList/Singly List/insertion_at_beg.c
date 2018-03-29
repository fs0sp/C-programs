#include<stdio.h>
#include<stdlib.h>

void insert_element(int value);
void print();



struct node{
        int info;
        struct node *next;
};

struct node *new1;
struct node *start=NULL;
struct node *last=NULL;

void main()
{
	int i;
	int value;
	
	while(i<5)
	{
		printf("Enter the Value in list : ");
		scanf("%d",&value);
		insert_element(value);
		i++;
	}
	
	printf("\nList is\n");
    print();
	
}

void insert_element(int value)
{
	new1 = (struct node*)malloc(sizeof(struct node));
	new1->info = value;
	new1->next = NULL;
	
	if(start == NULL)
	{
		start = new1;
		last = new1;
	}
	
	else
	{
		new1->next = start;
		start = new1;
	}
}

void print()
{
	new1 = start;
	
	while(new1->next!=NULL)
	{
		printf("%d ",new1->info);
		new1 = new1->next;
	}
	
	printf("%d",new1->info);
}





