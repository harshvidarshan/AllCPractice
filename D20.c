//to calculate division obtained by students//
#include<stdio.h>
int main()
{
	int maths,be,bme,eng,pps;
	float totalmarks,percentage;
	printf("Enter marks of 5 subjects: ");
	scanf("%d \n%d \n%d \n%d \n%d",&maths ,&be ,&bme ,&eng ,&pps);
	totalmarks=maths+be+bme+eng+pps;
	percentage=(totalmarks*100)/500;
{
	if(percentage>=60)
		{
		printf("\n First division");
	}
	
	
	else if(percentage>=50 || 59<=percentage)
	{
		printf("\n second division");
	}
	else if(percentage>=40 || 49<=percentage)
	{
		printf("\n third division");
	}

	else 
	{
		printf("\n Fail");
	}
}
	return 0;
}
