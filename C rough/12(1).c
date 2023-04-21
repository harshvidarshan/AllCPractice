//push,pop,peep,change,display
#include<stdio.h>
#define n 100
int s[n];
int top=-1;
void push(int);
int pop();
int peep();
int change(int,int);
void display();
void main()
{
	int ch,i,x,m;
	do{
		printf("\n Enter your choice: ");
		printf("\n1-push, 2-pop, 3-peep, 4-change, 5-display, 6-exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element: ");
				scanf("%d",&x);
				push(x);
				break;
				
			case 2:
				i=pop();
				printf("\n deleted element:%d",i);
				break;
				
			case 3:
				printf("\n value of i: ");
				scanf("%d",&i);
				x=peep(i);
				printf("\n element at ith index: %d",x);
				break;
			
			case 4:
				printf("\n enter new element:");
				scanf("%d",&x);
				printf("\n enter ith index: ");
				scanf("%d",&i);
				change(i,x);
				break;
			
			case 5:
				display();
				break;
			
			case 6:
				return;
				break;
			
			default:
			printf("\nWrong input");
		}
	}
	while(ch!=6);
}
void push(int x)
{
	if(top>=n)
	{
		printf("\nStack overflow");
	}
	top++;
	s[top]=x;
}
int pop()
{
	//int top=0;
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	top=top-1;
	return (s[top+1]);
}
int peep(int i)
{
	if(top-i+1<=-1)
	{
		printf("\nstack underflow");
	}
	return (s[top-i+1]);
}
int change(int x, int i)
{
	if(top-i+1<=-1)
	{
		printf("\nstack underflow");
	}
	s[top-i+1]=x;
	printf("\n new : %d",x);
	return x;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nstack empty");
	}
	for(i=top;i>=0;i--)
	{
		printf("\n stack element:%d",s[i]);
	}
}
