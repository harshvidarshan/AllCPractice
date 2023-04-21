#include<stdio.h>
int main()
{
	int P;
	int rate ;
	int time;
	float SimpleInterest;
	printf("Enter the value P: ");
	scanf("%d",&P);
	printf("\n Enter the value rate: ");
	scanf("%d",&rate);
	printf("\n Enter the value time: ");
	scanf("%d",&time);
	{
	
	SimpleInterest=((rate*time*P)/(100));
	printf("\n Enter the value SimpleInterest:%.2f",SimpleInterest);
}
	return 0;
	}
