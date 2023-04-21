//WAP to print no. and its squareroot for 0 to 9//
#include<stdio.h>
int main()
{
	int i;
	float j;
	for(i=0;i<10;i++)
	{
		printf("\n %d",i);
	}
	for(i=0;i<10;i++)
	{
		j=sqrt(i);
		printf("\nSquare root= %f",j);
	}
	return 0;
}
