//insert at first node in linked list 
#include<stdio.h>
#include<stdlib.h>
void insertf(int x);
void print();
struct node
{
	int info;
	struct node* link;
};
struct node* first=0;
int main()
{
	int x,n,i;
	printf("how many numbers?: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n insert element: ");
		scanf("%d",&x);
    	insertf(x);
    	print();
}
}
void insertf(int x)
{
	struct node* node1;
	struct node* first;
	node1=(struct node*)malloc(sizeof(struct node));
	if(node1==NULL)
	{
		printf("empty");
	}
	else
   {
	node1->info=x;
	node1->link=first;
	first=node1;
   }
}
void print()
{
	struct node* node1=first;
	printf("list is : %d",node1->info);
	while(node1!=NULL)
	{
		printf("%d",node1->info);
		node1=node1->link;
	}
	printf("\n");
}

