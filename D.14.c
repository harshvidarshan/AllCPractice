//quantity and price entered by user,discount 10% is offered if price of item is more than 1000//
#include<stdio.h>
int main()
{
		int price,quantity;
		int Totalamt;
		printf("Enter price and quantity: ");
		scanf("%d %d",&price , &quantity);
		Totalamt = (price * quantity);
		if(Totalamt >1000)
		printf("Discount of 10 percentage is offered");
		else
		printf("No discount");
		return 0;
}
