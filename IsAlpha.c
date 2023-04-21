#include<stdio.h>
#include<ctype.h>
int main ()
{
	char ch;
	char character;
	printf("Enter character to check: ");
	scanf("%c",&character);
	
	(isalpha (ch)) ? (printf("\n is an alphabet character ")):(printf("\n is not an alphabet character"));
	
}
