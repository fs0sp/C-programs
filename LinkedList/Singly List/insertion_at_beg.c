#include<stdio.h>

int main()
{

struct node {
	int info;
	struct node *next;
};

struct node *new1;

new1 = (struct node*)malloc(sizeof(struct node));
start = (struct node*)malloc(sizeof(struct node));

for(i=0;i<5;i++)
{
	scanf("%d",&new1[i].info);
}

if(new1->info==NULL)
{
	start = new1;
	last = new1;
}

else
{
	new1->next = 
}


int main()
{
struct Node* start = NULL;
struct Node* second = NULL;
struct Node* third = NULL;

start = (struct Node*)malloc(sizeof(struct Node)); 
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

start->info = 5; 
start->next = second; 

second->data = 6;
second->next = third; 

third->data = 7; 
third->next = NULL;

print(start);

return 0;
}


while (start != NULL)
{
	printf(" %d ", test->info);
	test = test->next;
}

return 0;

}










