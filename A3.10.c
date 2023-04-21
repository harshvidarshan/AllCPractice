// calculate electricity bill//
#include<stdio.h>
int main()
{
		float units,TotalElectricityBill,service,amt;
		printf("Enter the units consumed: ");
		scanf("%f",&units);
		if(units<=50)
		{
		amt = (units * 0.75);
	}
		else if(units<=100)
		{
			amt = 37.5 +((units -50)*0.85) ;
		}
			else if(units<=200)
		{
			amt = 80 + ((units -100)*1.50);
		}
			else if(units<=300)
		{
			amt = 230 +((units -200)*2.20) ;
		}
		else 
		{
			amt = 450 +((units-300)*3.00) ;
		}
		service = amt *0.20 ; 
		TotalElectricityBill = amt + service ;
		printf("ElectricityBill = %0.2f Rupees",TotalElectricityBill);
		return 0;
}

