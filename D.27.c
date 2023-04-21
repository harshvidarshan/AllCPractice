//cp and sp entered by user ,Wap made profit or loss and how much profit or loss made by seller//
#include<stdio.h>
int main()
{
	int cp,sp,Profit,loss;
	printf("Enter cost price: ");
	scanf("%d",&cp);
	printf("Enter selling price: ");
	scanf("%d",&sp);
	loss=cp-sp;
	Profit=sp-cp;
    if(cp>sp)
    printf("loss=%d",loss);
    else if(sp>cp)
    printf("profit=%d",Profit);
    else
    printf("Neither loss nor profit");
	return 0;
}
