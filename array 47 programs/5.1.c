//wap to reverse an element of an array without using second array
#include<stdio.h>
int main(void)
{
	int a[20],i,m,n,sum=0;
		printf("\nenter element :");
		scanf("%d",&a[i]);
		while(a[i]!=0)
		{
		m=a[i]%10;
		sum=(sum*10)+m;
		a[i]=a[i]/10;
	//	printf("\nreverse:%d",sum);
	}
		printf("\nreverse of element:%d",sum);
}
