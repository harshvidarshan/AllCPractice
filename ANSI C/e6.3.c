#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,q,i;
	for(i=0;i<=20;i++)
	{
		if(i==0)
		p=1;
		else
		p=p*2;
		q=1.0/(float)p;
		printf("%0.2f\t %0.2f\t      %0.2f\n",i,p,q);
	}
	return 0;
}
