#include<stdio.h>
int main()
{
	float m,x,sum,average;
	printf("This Program computes Average set of numbers\n ");
	printf("Enter no. one by one and put any -ve number at the end or at between\n");
	for(m=1;m<=1000;m++)
	{
		scanf("%f",&x);
		if(x<0)
		break;
		else
		sum+=x;
	}
	average=sum/(float)m-1 ;
	printf("\nNo. of Values:%f",m-1);
		printf("\n%f\n",sum);
		printf("%f\n",average);
}
