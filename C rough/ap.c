//standard deviation using array
#include<stdio.h>
#include<math.h>
float calculatesd(float data[]);
int main()
{
	int i;
	float sd=0,sum=0,data[100];
	for(i=0;i<10;i++)
	{
	printf("data elements: ");
	scanf("%f",&data[i]);
	}
	printf("answer:%0.6f",calculatesd(data));
}
float calculatesd(float data[])
{
	float sd=0.00,sum=0.00,mean;
	int i;
	for(i=0;i<10;i++)
	{
		sum=sum+data[i];
	}
	mean=sum/10;
	for(i=0;i<10;i++)
	{
		
		sd=sd+pow(data[i]-mean,2);
	}
	return sqrt(sd/10);
}


