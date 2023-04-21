//count pos,neg using 10 elements..
#include<stdio.h>
int main()
{
	int arr[10],i,pos=0,neg=0,zer=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter 10 array elements: ");
		scanf("%d",&arr[i]);
		if(arr[i]<0)
		{
			neg=neg+1;
		}
		else if(arr[i]>0)
		{
			pos=pos+1;
		}
		else
		{
			zer=zer+1;
		}
	}
	printf("Positive Numbers:%d",pos);
	printf("Negative Numbers:%d",neg);
	printf("Zero Number:%d",zer);
	return 0;
}
