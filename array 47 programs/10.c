//how many positive,negative ,odd and even
#include<stdio.h>
void main()
{
	int i,arr[100],n=25,pos=0,neg=0,odd=0,eve=0;
	for(i=0;i<n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos=pos+1;
		}
		else if(arr[i]<0)
		{
			neg=neg+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			odd=odd+1;
		}
		else 
		{
			eve=eve+1;
		}
	}
	printf("\n even :%d",eve);
	printf("\n odd: %d",odd);
	printf("\n positive:%d",pos);
	printf("\n negative:%d",neg);
}
