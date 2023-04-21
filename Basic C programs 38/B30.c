//if selling price of 15 items and the total profit earned on them is input through the keyboard,wap to find the cost price of one item//
#include<stdio.h>
int main()
{
	float cost,sell,profit,cost_prize;
	printf("Enter the total profit on 15 product : ");
	scanf("%f",&profit);
	printf("Enter the selling prize on 15 product : ");
	scanf("%f",&sell);
	cost=sell-profit;
	cost_prize=cost/15;
	printf("Cost prize = %.2f",cost_prize);
	getch();
}

