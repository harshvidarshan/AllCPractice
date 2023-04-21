//implement stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*top;
void push(int a)
{
	struct node *p;
	
	p= (struct node*)malloc(sizeof(struct node));
	p -> info=a;
	p -> link=top;
	top=p;
} 
int pop()
{
	int a;
	if(top!=NULL)
	{
		a=top->info;
		top=top->link;
		return a;
	}
	else
	{
		printf("\n stack underflow");
		return -1;
	}
} 
void main()
{
	int ch,a,i;
	do
	{
	printf("Enter your choice: ");
	printf("\n1-PUSH \n2-POP\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter data: ");
			scanf("%d",&a);
			push(a);
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			exit(1);
			
			default:
			printf("\n WRONG INPUT");
		}
	}
	while(1);
}
