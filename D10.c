//WAP to compute x for given y,y=3x+5 if x<=10, y=8x+10 if x>10//
#include<stdio.h>
int main()
{	
	int x,y;
	printf("enter value of x: ");
	scanf("%d",&x);
	if(x<=10)
	y= (3*x) +5;
	else
	y=(8 *x) + 5;
	printf("%d",y);
	return 0;
}
