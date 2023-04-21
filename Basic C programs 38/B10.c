/* WAP that prompts the user to enter an integer and then prints the integer 
first as character,decimal and finally as float.
number as character:k
number as decimal:75
number as float:0.000000 */
#include<stdio.h>
int main()
{
	int a;
	printf("Enter number as character: ");
	scanf("%c",&a);
	printf("\n Enter number as decimal:%d",a);
	printf("\n Enter number as float:%f",a);
	return 0;
}
