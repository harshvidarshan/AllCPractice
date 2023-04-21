/*WAP to create a customer's bill for a company.The company sells only five products 
TV,VCR,remote controller,CD player and tape recorder.The unit price are $400,$220,$35.20,$300 and $150.
THe program must read quantity of each piece of equipment purchased from keyboard.
it then calculates the cost of each item,the sub total and the total cost after an 8.25% sales tax.*/
#include<stdio.h>
int main()
{
	int t,v,r,c,tr;
	int tp,vp,cp,trp;
	float rp,subtotal,totalcost,tot;
	printf("Quantity of TV: ");
	scanf("%d",&t);
	printf("Quantity of VCR: ");
	scanf("%d",&v);
	printf("Quantity of Remote controller: ");
	scanf("%d",&r);
	printf("Quantity of CD player: ");
	scanf("%d",&c);
	printf("Quantity of Tape recorder: ");
	scanf("%d",&tr);
	printf("\t\nBILL:");
	tp=t*400;
	printf("\n Price of %d's TV:%d",t,tp);
	vp=v*220;
	printf("\n Price of %d's VCR:%d",v,vp);
	rp=35.20*r;
	printf("\n Price of %d's Remote Controller:%0.2f",r,rp);
	cp=300*c;
	printf("\n Price of %d's CD Player:%d",c,cp);
	trp=15*tr;
	printf("\n Price of %d's Tape Recorder:%d",tr,trp);
	subtotal=tp+vp+rp+cp+trp;
	printf("\n Subtotal:%0.2f",subtotal);
	totalcost=((8.25/100)*subtotal)+subtotal;
	printf("\n TOTAL COST OF BILL:%0.3f",totalcost);
	return 0;
}
