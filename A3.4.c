//three marks, average marks and percentage of marks and grade on base of % //
#include<stdio.h>
int main()
{
	int maths,eng,pps;
	float totalmarks,averagemarks,percentage;
	printf("Enter marks of maths: ");
	scanf("%d",&maths);
	printf("Enter marks of eng: ");
	scanf("%d",&eng);
	printf("Enter marks of pps: ");
	scanf("%d",&pps);
	totalmarks=maths+eng+pps;
	averagemarks=(totalmarks/3);
	printf("\n %0.2f is average marks",averagemarks);
	percentage=((totalmarks*100)/300);
	printf("\n %0.2f is percentage",percentage);
{
	if(percentage>=80)
		{
		printf("\n A Grade");
	}
	else if(percentage>=60 && percentage<80)
	{
		printf("\n B Grade");
	}
	else if(percentage>=40 && percentage<60)
	{
		printf("\n C Grade");
	}
    else 
	{
		printf("\n Fail");
	}
}
	return 0;
}
