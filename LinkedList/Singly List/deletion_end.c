#include<stdio.h>
#include<stdlib.h>

struct node{
        int info;
        struct node *next;
};
struct node *new1;
struct node *start=NULL;
struct node *last=NULL;

void insert(int);
void print();
void delete_end();

void main()
{
        int i=0;
        int values;
        while(i<5){
                printf("Enter the value to be inserted : ");
                scanf("%d",&values);
                insert(values);
                i++;
        }
        printf("\nList is\n");
        print();
	printf("\nAfter Deletion the list is : \n");
	delete_end();
	print();
}

void insert(int values)
{
        new1=(struct node*)malloc(sizeof(struct node));
        new1->info=values;
        new1->next=NULL;
        if(start==NULL){
                start=new1;
                last=new1;
	}
        else{
                last->next=new1;
                last=new1;
        }
}

void print()
{
        new1=start;
        while(new1!=last){
                printf("%d\t",new1->info);
                new1=new1->next;
        }
        printf("%d",new1->info);
}

void delete_end()
{
	if(start==NULL)
		printf("Underflow");
	else if(start->next==NULL){
		free(start);
		free(last);
		start=NULL;
		last=NULL;
	}
	else{
		struct node *current;
		current=start;
		while(current->next!=last)
			current=current->next;
		current->next=NULL;
		free(last);
		last=current;
	}
}
