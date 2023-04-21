/*11
a. WAP to calculate x^y without using power function
*/
#include<stdio.h>
void main()
{
	int x,y,i,ans;
	scanf("%d %d",&x,&y);
	while(y!=0)
	{
		ans=x*x;
		y--;
	}
	printf("%d\n",ans);
}
