//develop a program to perform multiplication of two matrix//
#include<stdio.h>
int main()
{
	int i,j,h[i],g[j],n,m;
	int mul,mult,multi;
	printf("enter row elements: ");
	scanf("%d",&n);
		printf("enter column elements: ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		printf("h elements: ");
		scanf("%d",&h[i]);
	}
	for(j=0;j<m;j++)
	{
		printf("g elements: ");
		scanf("%d",&g[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			mul=h[i]*g[j];
		    mult=h[i]*h[j];
		    multi=g[i]*g[j];
		}
		printf("\n mul=%d",mul);
		printf("\n mult=%d",mult);
		printf("\n multi=%d",multi);
	}
	return 0;	
}
