#include<stdio.h>
#include<ctype.h>
int main()
{	
	int a;
	char alphabet;
	int number;
	
	printf("Enter value of alphabet: ");
	scanf("%c",&alphabet);
	
	(alphabet>number) ? printf("\n given character is an alphabet") : printf("\n given character is not an alphabet");
	
	
	printf("\n Enter value of Number: ");
	scanf("%d",&number);
	
	(alphabet>number) ? printf("\n given character is an number") : printf("\n given character is not an number");
	
	return 0;
}
