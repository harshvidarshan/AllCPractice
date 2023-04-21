//WAP to calculate salary as per following table//
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Gender: ");
	scanf("%s",&a);
	printf("\n Enter years: ");
	scanf("%d",&b);
	printf("\n Enter Qualification: ");
	scanf("%s",&c);
	if(a=='female')
	{
		if(b>=10 && c=='post-graduate')
	{
		printf("\n salary=12,000");
	}
	else if(b>=10 && c=='graduate')
	{
		printf("\n salary=9000");
	}
	else if(b<10 && c=='post-graduate')
	{
		printf("\n salary=10,000");
	}
	else
    {
    	printf("\n salary=6000");
	}
}
	else if(a=='male')
	{
	    if(b>=10 && c=='post-graduate')	
	    {
	    	printf("\n salary=15,000");
		}
		else if(b>=10 && c=='graduate')
		{
			printf("\n salary=10,000");
		}
		else if(b<10 && c=='post-graduate')
		{
			printf("salary=10,000");
		}
		else
		{
			printf("salary=7000");
		}
	}
	
	return 0;
}
