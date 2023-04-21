//Ramesh's basic salary is input through the keyboard.His dearness allowance is 40% of basic salary and house rent is 20% of basic salary.WAP to calc. gross salary.
#include<stdio.h>
int main()
{
	float bs,da,hr,gs;
	printf("bs: ");
	scanf("%f",&bs);
	da= (40*bs)/100 ;
	hr= (20*bs)/100 ;
	gs =bs+da+hr ;
	printf("Dear allowance:%0.2f \nHouse Rent:%0.2f \nGrossSalary:%0.2f",da,hr,gs);
	return 0;
}
