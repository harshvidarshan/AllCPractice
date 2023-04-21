//customers orders and stock//
#include<stdio.h>
int main()
{	 
	int orders,stock;
	printf("Enter orders: ");
	scanf("%d",&orders);
	printf("\n Enter stock: ");
	scanf("%d",&stock);
	if(orders<=stock)
	printf("Credit is OK,Supply has requirement");
	else if(stock!=orders)
	printf("Credit is Not OK,Send him intimation");
	else 
	printf("Credit is OK,What is stock and data the balance will be send");
	return 0;
}
