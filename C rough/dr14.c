#include<stdio.h>
#define n 20
int f(char );
int g(char );
int r(char );
void push(char );
int pop();
int top=-1;
char s[n];
void main()
{
	char infix[n],polish[n]=" ",next;
	char temp;
	int i=1,j=0,rank=0;
	top=0;
	s[top]='(';
	printf("\n Enter infix: ");
	scanf("%s",infix);
	next=infix[i];
	while(next!=0)
	{
		if(top<0)
		{
			printf("\n Invalid string");
			return 0;
		}
		while(g(s[top])>f(next))
		{
			temp=pop();
			polish[j]=temp;
			rank=rank+r(temp);
			j++;
			if(rank<1)
			{
				printf("Invalid string");
				return ;
			}
		}
		if(g(s[top])!=f(next))
		{
			push(next);
		}
		else
		{
			pop();
		}
		i++;
		next=infix[i];
	}
	if(top!=-1 || rank!=0)
	{
		printf("\n Invalid string");
	}
	else
	{
		printf("\n valid string");
	}
}
int f(char t)
{
	if(t=='+' || t=='-')
	{
		return 1;
	}
	else if(t=='*' || t=='/')
	{
		return 3;
	}
	else if(t=='^')
	{
		return 6;
	}
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 7;
	}
	else if(t=='(')
	{
		return 9;
	}
}
int g(char t)
{
		if(t=='+' || t=='-')
	{
		return 2;
	}
	else if(t=='*' || t=='/')
	{
		return 4;
	}
	else if(t=='^')
	{
		return 5;
	}
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 8;
	}
	else if(t=='(')
	{
		return ;
	}
}
int r(char t)
{
		if(t=='+' || t=='-')
	{
		return -1;
	}
	else if(t=='*' || t=='/')
	{
		return -1;
	}
	else if(t=='^')
	{
		return -1;
	}
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 1;
	}
	else if(t=='(')
	{
		return ;
	}
}
void push(char t)
{
	if(top>=n-1)
	{
		printf("\n Stack overflow");
	}
	top++;
	s[top]=t;
}
int pop()
{
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	top--;
	return (s[top+1]);
}
