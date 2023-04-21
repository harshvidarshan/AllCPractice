/* WAP that inputs one five-digit number separates the number into individual
digits and prints the digits separated from one another by three spaces each.
[hint:use combinations of integer division and remainder operation.]
for eg.,if the user types in 42139,the program should print:4 2 1 3 9 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,d1,d2,d3,d4,d5;
	printf("Enter a 5 digit whole number");
	scanf("%d",&num);
	d5=num%10;
	num=num/10;
	d4=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d1=num%10;
	printf(" %d  %d  %d  %d  %d",d1,d2,d3,d4,d5);
	return 0;
}
