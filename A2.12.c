#include<stdio.h>
int main()
{
	int Da ,Hra , Pf , Gross , Net;
	int BasicSalary;
	printf("Enter the value Basic Salary: ");
	scanf("%d",&BasicSalary);
	
	printf("BasicSalary:%d",BasicSalary);
	
	Da=((BasicSalary*10)/100);
	printf("\nDa:%d",Da);
	
	Hra=(BasicSalary*7.50)/100;
	printf("\n Hra:%d",Hra);
	
	Pf=(BasicSalary*12.50)/100;
	printf("\npf:%d",Pf);
	
	Gross=BasicSalary+Da+Hra;
	printf("\n Gross:%d",Gross);
	
	Net=Gross-Pf;
    printf("\n Net:%d",Net);
	
	return 0;
	
	
}
