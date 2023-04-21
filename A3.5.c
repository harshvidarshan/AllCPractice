//two integer operands from operator and one operator from user,perform operation and prints result (use switch statement)//
#include<stdio.h>
int main()
{
	float a,b;
	char operator;
		printf("Enter operator(+,-,*,/): ");
	scanf("%c",&operator);
	printf("Enter num1 operand: ");
	scanf("%f",&a);
	printf("Enter num2 operand: ");
	scanf("%f",&b);
	switch(operator)
	{
		case '+':
			printf("%0.2f + %0.2f = %0.2f", a, b, a+b);
			break;
		case '-':
			printf("%0.2f - %0.2f = %0.2f",a,b,a-b);
			break;
		case '*':
		    printf("%0.2f * %0.2f = %0.2f",a,b,a*b);
			break;
		case '/':
		    printf("%0.2f / %0.2f = %0.2f",a,b,a/b);
	    	break;
		default:
		printf("Wrong Input");
	}
	return 0;
}
