//The distance between two cities (in km.)is input through the keyboard.WAP to convert and print this distance in meters,feet,inches,yards and centimetres.//
#include<stdio.h>
#include<conio.h>
int main()
{
	float km, m, feet, inch, cm,yard;
	printf("Enter the distance between two cities(in km) : ");
	scanf("%f", &km);
	m = km * 1000;
	feet = km*3280.84;
	inch = km*39370.1;
	cm = km/100000;
	yard = km*1093.61;
	printf("Distance in kilometres : %.2f\n",km);
	printf("Distance in Meters : %.2f\n",m);
	printf("Distance in Feet : %.2f\n",feet);
	printf("Distance in Inches : %.2f\n",inch);
	printf("Distance in Centimeters : %.f\n",cm);
	printf("Distance in Yards : %.2f\n",yard);
	return 0;
} 
