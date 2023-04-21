//cashier has currency notes 10,50 and 100. If the amt to be withdrawn is input through the keyboard in hundreds,
//find total number of currency notes of each denomination the cashier will have to give to the withdrawer..//
#include<stdio.h>
int main()
{
	int hr,tr,fr,n;
	printf("Enter the amt to be withdrawn(in hundreds): ");
	scanf("%d",&n);
	if(n>=100)
	{
		hr=n/100;
		n=n%100;
	}
	else if(n>=50 && n<=99)
	{
		fr=(n/50);
		n=n%50;
	}
	else if(n>=10 && n<=49)
	{
		tr=(n/10);
		n=n%10;
	}
	printf("\n RS.100=%d",hr);
	printf("\n RS.50=%d",fr);
	printf("\n RS.10=%d",tr);
	return 0;
}
