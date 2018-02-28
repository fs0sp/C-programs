#include<stdio.h>

void main()
{
	

struct node
{
	int info;
	struct node *next;
};

struct node *new1;

new1 = (struct node*)malloc(sizeof(struct node));

new1->info = 4;
new1->next = NULL;

}
