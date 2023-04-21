//reading an array marks initialising and declaring//
#include<stdio.h>
int main()
{
	int i;
	int marks[5];
	for(i=0;i<5;i++)
	{
		printf("Enter marks[5]: ");
		scanf("%d\n",&marks[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("\nEnter marks[5] is %d \n",marks[i]);
	}
	return 0;
}

