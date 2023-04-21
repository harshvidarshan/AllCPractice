#include<stdio.h>
int main()
{
	int basiccost;
    int totalamount;
    int totalcost;
	printf("Enter the basiccost: ");
	scanf("%d",&basiccost);

	
	totalcost=(0.14*basiccost)+(0.12*basiccost)+(0.04*basiccost)+(0.015*basiccost) +(1*basiccost);
	printf("\n total cost=%d",totalcost);
	return 0;
	
}
