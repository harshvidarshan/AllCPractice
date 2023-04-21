#include<stdio.h>
#include<math.h>
int main()
{
	float count,negative,number,sqroot;
	printf("Enter 9999 to stop");
	count=0;
	negative=0;
	while(count<=100)
	{
		printf("\nEnter number:");
		scanf("%f",&number);
		if(number==9999)
		break;
		if(number<0)
		{
			printf("Number is negative\n");
			negative++;
			continue;
		}
		sqroot=sqrt(number);
		printf("Square Root of %0.2f is %0.2f",number,sqroot);
		count++;
	}
	printf("\nTotal no. of items:%0.1f",count);
	printf("\n Negative items:%0.1f",negative);
	printf("\n End of program");
	return 0;
}
