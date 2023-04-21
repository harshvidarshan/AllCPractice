//singly linked list-insert a node at front,
//display all noes,delete first node,insert node at end,delete a last node,
//delete node from specified position
#include<stdio.h>
#include<stdlib.h>
void insertf(int x);
void display();
int deletef();
struct node
{
	int info;
	struct node* link;	
};
int main(void)
{
	int ch,x;
	do
	{
		printf("\n1-Insert F, 2-Display, 3-delete F, 4-Insert E, 5-Delete E, 6-Delete SP");
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter x: ");
				scanf("%d",&x);
				insertf(x);
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				x=deletef();
				printf("\nDeleted:%d",x);
				break;
		}
	}
	while(ch!=6);
}
struct node* first=NULL;
void insertf(int x)
{
	struct node*node1;
	node1=(struct node*)malloc(sizeof(struct node));
	if(node1==NULL)
	{
		printf("node not created");
	}
	else
	{
		node1->info=x;
		node1->link=first;
		first=node1;
	}
}
int deletef()
{
	int x;
	struct node* d=first;
	x=first->info;
	first=first->link;
	return x;
}
void display()
{
	struct node* save;
	if(first==NULL)
	{
		printf("\nfirst is empty");
	}
	else
	{
		save=first;
		printf("linked list: \n");
		while(save->link!=NULL)
		{
			printf("%d",save->info);
			save=save->link;
		}
	}
}
