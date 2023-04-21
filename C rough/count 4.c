//count no. of 4 in number
#include<stdio.h>
void main()
{
	int n,m,count=0;
	printf("n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		while(m=n%10)
		{
			if(m==4)
			{
				count=count+1;
			}
			n=n/10;
		}
		printf("\n no. of four in number:%d",count);
	}
	
}
