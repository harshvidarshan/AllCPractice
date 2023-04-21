#include<stdio.h>
int main()
{
	float marks,bme,eng,be,pps,math,per,totalmarks;
	printf("Enter marks of bme: ");
	scanf("%f",&bme);
	printf("Enter marks of eng: ");
	scanf("%f",&eng);
	printf("Enter marks of be: ");
	scanf("%f",&be);
	printf("Enter marks of pps: ");
	scanf("%f",&pps);
	printf("Enter marks of math: ");
	scanf("%f",&math);
	totalmarks = bme + eng + be + pps + math ;
	printf("%f",totalmarks);
	per= (float)((totalmarks/500)* 100);
	printf("\n%f",per);
	{
	
	if(per < 35)
    { 
	printf("\n fail");
	}
    else if(per>=35 && per<=45)
	{
		printf("\n pass");
	}
	else if(per>45 && per<=60)
	{
		printf("\n second class");
	}
    else if(60>per && per<=70)
	{
		printf("\n first class");
	}
	else 
	{
		printf("\n distinction");
	}
}
	return 0;
	
}
