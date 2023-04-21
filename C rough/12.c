#include<stdio.h>
#define n 50
int s[n];
int top=-1;
void push(int x);
int pop();
int peep(int i);
int change(int x, int i);
void display();
void main()
{
	int ch,x,i;
	do
	{
		printf("1-PUSH\n 2-pop\n 3-peep\n 4-change\n 5-display\n 6-exit\n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter any value to enter element : ");
				scanf("%d",&ch);
				push(x);
				break;
				
			case 2:
				i=pop();
				printf("\n deleted element: %d\n",i);
				break;
				
			case 3:
				printf("\n value of i: ");
				scanf("%d",&i);
				x=peep(i);
				printf("\n element of %d at %d index: ",x,i);
				break;
				
			case 4:
				printf("\n enter any value to change ith element: \n");
				scanf("%d",&i);
				change(i,x);
				break;
			
			case 5:
				display();
				
			case 6:
				return ;
				break;
				
			default:
				printf("wrong input");
				
		}
	}
	while(ch!=6);
}
void push(int x)
{
	if(top>=n-1)
	{
		printf("\nstack overflow");
		return ;
	}
	top=top+1;
	s[top]=x;
}
int pop()
{
	if(top==-1)
	{
		printf("\nstack underflow");
		return 0;
	}
	top--;
	return s[top+1];
}
int peep(int i)
{
	if(top-i+1<=-1)
	{
		printf("\n stack overflow");
		return 0;
	}
	return s[top-i+1];
}
int change(int x, int i)
{
	if(top-i+1<=-1)
	{
		printf("\n stack overflow");	
	}
	x=s[top-i+1];
	printf("\n new x:%d",x);
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
		printf("\n stack element:%d\n",s[i]);
	}
}
