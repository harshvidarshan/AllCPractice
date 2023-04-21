#include<stdio.h>
int main()
{
	int amount;
	int totalnotes;
	int note500,note100,note50,note20,note10,note5,note2,note1;
	note500=note100=note50=note20=note10=note5=note2=note1=0;
	printf("Enter the input amount: ");
	scanf("%d",&amount);
	printf("\n Total number of notes:%d",totalnotes);
	note500=amount/500;
	amount -= note500 * 500;
	(amount>=500) ? printf("1"): printf("0");
	
     note100=amount/100;
	amount -= note100 * 100;
	(amount>=100) ? printf("1"): printf("0");
	
	note50=amount/50;
	amount -= note50 * 50;
	(amount>=50) ? printf("1"): printf("0");
	
	note20=amount/20;
	amount -= note20 * 20;
	(amount>=20) ? printf("1"): printf("0");
	
	note10=amount/10;
	amount -= note10 * 10;
	(amount>=10) ? printf("1"): printf("0");
	
	note5=amount/5;
	amount -= note5 * 5;
	(amount>=5) ? printf("1"): printf("0");
	
	note2=amount/2;
	amount -= note2 * 2;
	(amount>=2) ? printf("1"): printf("0");
	
	note1=amount/1;
	amount-= note1 *1;
	(amount>=1)? printf("1"):printf("0");

	printf("\n 500:%d",note500);
	printf("\n 100:%d",note100);
	printf("\n 50:%d",note50);
	printf("\n 20:%d",note20);
	printf("\n 10:%d",note10);
	printf("\n 5:%d",note5);
	printf("\n 2:%d",note2);
	printf("\n 1:%d",note1);
	
	return 0;


}
