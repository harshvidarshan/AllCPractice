//car parking charge, car $2 per hour,bus $3per hour,truck $4 per hour//
#include<stdio.h>
int main()
{
		int hours,c,b,t,typeofvehicle,parkingcharge;
		printf("Enter type of vehicle: ");
		scanf("%c",&typeofvehicle);
		printf("\n Enter hours spent by vehicle:  ");
		scanf("%d",&hours);
		if(typeofvehicle=='c')
		{
		    parkingcharge=(2*hours);
		}
		else if(typeofvehicle=='b')
			{
		    parkingcharge=(3*hours);
		}
		else
			{
		    parkingcharge=(4*hours);
		}
		printf("%d is parking charge for particular type of vehicle",parkingcharge);
		return 0;
	}
