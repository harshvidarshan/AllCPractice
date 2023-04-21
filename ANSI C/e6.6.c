#include<stdio.h>
#define loop 100
#define accuracy 0.0001
int main()
{
	int n;
	float x,term,sum;
	printf("Input value of x:");
	scanf("%f",&x);
	sum=0;
	for(term=1,n=1;n<=100;++n)
	{
		sum+=term;
		if(term<=accuracy)
		goto output;
		term *=x;
	}
	printf("FINAL VALUE OF N ISN'T SUFFICIENT\n");
	printf("\nTO ACHIEVE DESIRED ACCURACY");
	goto end;
	output:
		printf("\nEXIT FROM LOOP\n");
		printf("sum:%f; No. of terms:%d\n",sum,n);
		end:
		;
}
