//basic salary, hra and da//
#include<stdio.h>
int main()
{
	int basicsalary;
	int hra,da;
	int Rs;
	printf("Enter the basic salary: ");
	scanf("%d",&basicsalary);
	if(basicsalary < 1500)
	{
	hra=((10*basicsalary)/100);
	da=((90*basicsalary)/100);
    }
    if(basicsalary >= 1500)
    {
    hra= 500;
    da=((98*basicsalary)/100);
	}
	printf("\n %d \n%d",hra,da);
	return 0;
}
