//y=x^n... n=0,1,2..
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y=1,n,i,count=1;
	printf("x & n: ");
	scanf("%f %f",&x,&n);
	/*for(i=1;i<=n;i++)
	{
		y=pow(x,n);
	}
	printf("y:%f",y);*/
	while(count<=n)
	{
		y=y*x;
		count++;
	}
	printf("y=%f",y);
	return 0;
}
