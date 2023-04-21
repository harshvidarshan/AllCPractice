//Given pt(x,y) WAP to find out pt. lies on X axis,Y axis or at the origin vi.(0,0)
#include<stdio.h>
int main()
{
	int x,y;
	printf("x: ");
	scanf("%d",&x);
	printf("y: ");
	scanf("%d",&y);
	if(x==0 && y==0)
	{
		printf("\n Given pt. is at origin");
	}
	else if(x>=1 || x<=1 && y==0 )
	{
		printf("\n given pt. is on x-axis");
	}
	else if(x==0 && y>=1 || y<=1)
	{
		printf("\n given pt. is on y-axis");
	}
/*	else if(x==0 && y==0)
	{
		printf("\n Given pt. is at origin");
	} */
	return 0;
}
