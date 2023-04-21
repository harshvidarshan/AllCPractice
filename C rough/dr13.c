//a^i b^i is valid or invalid where i>=1 and no. of a = no. of b
#include<stdio.h>
int n=30, top=-1;
char arr[30];
void push(char x)
{
	if(top==n-1)
	{
		printf("\nStack OVerflow");
	}
	else
	{
		top++;
		arr[top]=x;
	}
}
char pop()
{
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	else
	{
		top--;
		return (arr[top+1]);
	}
}
void main()
{
	int counter=0,i=0;
	char str[25];
	printf("enter string: ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			push(str[i]);
		}
		else
		{
			counter++;
		}
		i++;
	}
	while(top!=-1)
	{
		pop();
		counter--;
	}
	if(counter!=0)
	{
		printf("\nINVALID STRING");
	}
	else
	{
		printf("\nVALID STRING");
	}
}

