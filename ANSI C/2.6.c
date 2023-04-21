#include<stdio.h>
int main()
{
	int i,n,pos=0,neg,zer,arr[10];
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("array element: ");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i]>=1)
		{
			pos=pos+1;
		}
		else if(arr[i]<0)
		{
			neg=neg+1;
		}
		else
		{
			zer=zer+1;
		}
	}
	printf("\n no. of positive :%d",pos);
	printf("\n no. of negative:%d",neg);
	printf("\n no. of zero:%d",zer);
	return 0;
}
