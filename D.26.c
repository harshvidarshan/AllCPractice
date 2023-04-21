//Body mass index(BMI)//
#include<stdio.h>
int main()
{
		float a,b,BMI;
		printf("Enter weight of body: ");
		scanf("%f",&a);
		printf("Enter height of body: ");
		scanf("%f",&b);
		BMI=(a/(b*b));
		printf("\n BMI=%0.2f",BMI);
		if(BMI<=15)
		{
			printf("\n Starvation");
		}
		else if(15.1>=BMI && BMI<=17.5)
		{
			printf("\n Anorexic");
		}
		else if(17.6>=BMI && BMI<=18.5)
		{
			printf("\n Underweight");
		}
		else if(18.6>=BMI && BMI<=24.9)
		{
			printf("\n Ideal");
		}
		else if(25>=BMI && BMI<=25.9)
		{
			printf("\n Overweight");
		}
		else if(30>=BMI && BMI<=30.9)
		{
			printf("\n Obese");
		}
		else
		{
			printf("\n Morbidly obese");
		}
		return 0;		
}
