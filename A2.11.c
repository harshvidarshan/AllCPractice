#include<stdio.h>
int main()
{ 
    int totaldistance;
    int fuelspent;
    float averageconsumption;
    
    printf("Input the totaldistance in km: ");
    scanf("%d",&totaldistance);
    
    printf("\n Input fuelspent in liters: ");
    scanf("%d",&fuelspent);
	{
    
    averageconsumption=totaldistance/fuelspent;
    printf("\n Enter the averageconsumption:%.2f",averageconsumption);
    return 0;
}
    
}
