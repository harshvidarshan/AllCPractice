/* WAP that asks that user to enter a quantity and a cost.
the values are to be read into an integer named quantity and float named unit price.
define the variables,use only one statement to read values.after reading value skip one line and print each value,with an appropriate name on separate line */
#include<stdio.h>
#include<conio.h>
int main()
{
	int quantity;
	float cost;
	printf("Enter the quantity of the product :");
	scanf("%d",&quantity);
	printf("Enter the cost of the product :");
	scanf("%f",&cost);
	printf("/nThe quantity of the product is %d and the price of product is %.2f",quantity,cost);
	return 0;
}
