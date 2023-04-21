//In a town,the % of men=52.The % of tot. literacy=48,tot % of literate men=35 of the total population,
//WAP to find total no. of illiterate men and women if the population of the town is 80,000....//
#include<stdio.h>	
int main()
{
	int pop=80000;
	int popmen,popwomen,poplit,popilit,litmen,litwomen,ilitmen,ilitwomen;
	popmen=(52*pop)/100;
	popwomen=pop-popmen;
	poplit=(48*pop)/100;
	litmen=(35*pop)/100;
	litwomen=poplit-litmen;
	ilitmen=popmen-litmen;
	ilitwomen=popwomen-litwomen;
	printf("\n Total population : %d",pop);
	printf("\n Popluation of men : %d",popmen);
	printf("\n Population of women : %d",popwomen);
	printf("\n Literate men : %d",litmen);
	printf("\n Literate women : %d",litwomen);
	printf("\n Illitrate men : %d",ilitmen);
	printf("\n Illitrate women : %d",ilitwomen);
	return 0;
}

