#include<stdio.h>
#define Bas 1500.00
#define Bonus 200.00
#define Com 0.02
int main()
{
	int quan;
	float gross,price,bonus,comm;
	printf("No. and sold price: ");
	scanf("%d %f",&quan,&price);
	bonus =Bonus*quan;
	comm=Com*quan*price;
	gross=Bas+comm+bonus;
	printf("\nBonus: %0.02f",bonus);
	printf("\nCommision:%0.02f ",comm);
	printf("\nGross Salary:%0.02f",gross);
	return 0;
}
