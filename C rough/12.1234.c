//print 1 to 10 , 1 to n , odd numbers between 1 to 10 , no. viz divisible by 2 but not by 3
#include<stdio.h>
void main()
{
	int i,n;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		// 1 to n
		//printf("1 to n:%d\n",i);
		if(i%2!=0)
		{
			//odd 
			printf("odd%d\n",i);
		}
		/*if(i%2==0 && i%3!=0)
		{
			printf("divisible%d\n",i);
		}*/
	}
}
