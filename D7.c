//determine youngest of 3 age //
#include<stdio.h>
int main()
{
	int age1,age2,age3,h;
	printf("Enter Ram's age: ");
	scanf("%d",&age1);
	printf("\n Enter Shyam's age: ");
	scanf("%d",&age2);
	printf("\n Enter Ajay's age: ");
	scanf("%d",&age3);
	h=(age1<age2)?(age1<age3?age1:age3):(age2<age3?age2:age3);
	printf("\n %d is youngest age",h);
}
