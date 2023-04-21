//develop program to count no. is positive or negative using 10 array of numbers//
#include<stdio.h>
int main()
{
	int i,array[10],positive=0,negative=0;
	for(i=0;i<10;i++)
	{
		printf("Enter array of any 10 numbers : ");
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		if(array[i]>0)
		positive=positive+1;
		else
		negative=negative+1;
	}
	printf("%d are total number of positive numbers\n",positive);
		printf("%d are total number of negative numbers\n",negative);
	return 0;
}

