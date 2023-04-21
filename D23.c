//time taken by worker//
#include<stdio.h>
int main()
{
		float hours;
		printf("Enter hours taken by worker: ");
		scanf("%f",&hours);
		if(hours>=2 && hours<=3)
		{ 
		printf("Highly efficient");
		}
		else if(hours>3 && hours<=4)
		{ 
		printf("Improve speed");
		}
		else if(hours>4 && hours<=5)
		{ 
		printf("Given training to Improve speed");
		}
		else if(hours>5)
		{ 
		printf("Leave company");
		}
		return 0;
}
