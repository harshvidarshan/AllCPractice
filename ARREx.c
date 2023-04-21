/*Use a single-subscripted array to solve the following problem. Read in 20 numbers, each of 
which is between 10 and 100, inclusive. As each number is read, print it only if it’s not a 
duplicate of a number already read. Provide for the “worst case” in which all 20 numbers 
are different. Use the smallest possible array to solve this problem. */
#include<stdio.h>
int main()
{
	int i,arr[20],duplicate;
	for(i=0;i<10;i++)
	{
	printf("Enter number(inclusive): ");
	scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
	arr[duplicate]=arr[i];
}
	for(i=0;i<10;i++)
	{
		if(arr[i]>10 && arr[i]<100)
		{
			if(arr[i]!=arr[duplicate])
			{
				printf(" %d",arr[i]);
			}
		}
		}
		printf("\n The non duplicate values are:%d",i);
		
		return 0;
		
}

