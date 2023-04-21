//PUSH,POP,PEEP,CHANGE,DISPLAY implementing stack using array
#include<stdio.h>
int n=100,x;
int s[100];
void push(int a);
int pop();
int peep(int i);
int change(int a, int i);
void display();
int top=-1;
void push(int a)
{
	if(top==n-1)
	{
		printf("\n Stack overflow");
	}
	top=top+1;
	s[top]=a;
}
int pop()
{
	if(top==1)
	{
		printf("\nStack underflow");	
	}
	top=top-1;
	return s[top+1];
}
int peep(int i)
{
	if(top-i+1<=-1)
	{
		printf("\nStack Underflow");
	}
	return s[top-i+1];
}
int change(int a, int i)
{
	if(top-i+1<=-1)
	{
	  printf("\nStack Underflow");	
	}
	a=s[top-i+1];
	printf("\n return new element: %d",a);
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	for(i=top;i>=0;i--)
	{
		printf("\nstack element:%d",s[i]);
	}
}
void main()
{
	int i,n,ch,a;
	do
	{
	printf("Enter your choice: ");
	printf("1-PUSH\t2-pop\t3-peep\t4-change\t5-display\t6-exit");
	scanf("%d",&n);
		switch(ch)
		{
			case 1:
			printf("\nenter value in stack: ");
			scanf("%d",&a);
			push(a);
			break;
			
			case 2:
			i=pop();
			break;
			
			case 3:
			printf("\n enter value of i: ");
			scanf("%d",i);
			x=peep(i);
			printf("\n element of %d at %d index",x,i);
			break;
			
			case 4:
			change(i,x);
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			return ;
			break;
			
			default:
			printf("\nWrong input,any no. from 1 to 6 is valid");
			break;
		}
	}
	while(ch!=6);
}


