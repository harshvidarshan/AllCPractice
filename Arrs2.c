//WAP to perform addition of two matrix//
#include<stdio.h>
int main()
{
	int h[1][2]={{1,2}};
	int g[1][2]={{3,4}};
	int sum;
	printf("%d",h[0][0]);
	printf("%d\n",h[0][1]);
	printf("%d",g[0][0]);
	printf("%d\n",g[0][1]);
	sum=h[0][0] + g[0][0]; 
	printf("%d",sum);
	sum= h[0][1] + g[0][1];
	
	printf("%d =sum",sum);
	return 0;
}
