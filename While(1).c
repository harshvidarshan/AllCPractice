// perfect or not(while loop)//
#include<stdio.h>
int main()
{
	int i=1,n,a=0;
	printf("enter n : ");
	scanf("%d",&n);
	while(i<n)
{
	if(n%i==0)
		{
		printf("\n %d",i);
		a=a+1;
	}
	i=i+1;
}
	printf("\n =%d",a);
	if(a==n)
	printf("\n Given no. is perfect number");
	else
	printf("\n Given no. is not perfect number");
	return 0;
}

