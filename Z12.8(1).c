#include<stdio.h>
int main()
{
	int amount;
	int totalnotes;
	int note500,note100,note50,note;
	note500=note100=note50=0;
	printf("Enter the input amount: ");
	scanf("%d",&amount);
	printf("\n Total number of notes:%d",totalnotes);
	note500=amount/500;
	amount -= note500 * 500;
	is(amount>=500) ? printf("1"): printf("0");
	if(amount>=100)
	{
		note100 = amount/100;
		amount -= note100 * 100;
	}
	if(amount>=50)
	{
		note50 = amount/50;
		amount -= note50 * 50;
	}
	printf("\n 500:%d",note500);
	printf("\n 100:%d",note100);
	printf("\n 50:%d",note50);
	
	return 0;
}
