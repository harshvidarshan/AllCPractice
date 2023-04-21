//to count odd or even elements in array//
#include<stdio.h>
int main()
{
	int i,num[100],n;
	int odd=0,even=0;
		printf("Enter no. of array elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
				printf("Enter array elements: ");
		scanf("%d",&num[i]);
		}
		for(i=0;i<n;i++)
		{
			if(num[i]%2==0)
			even=even+1;
			else 
			odd=odd+1;
	}
	printf("\n%d are even numbers",even);
		printf("\n%d are odd numbers",odd);
		return 0;
}
