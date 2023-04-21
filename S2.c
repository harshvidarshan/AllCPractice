//WAP that allow user to enter 5 numbers & choose between finding smallest,largest ,sum or average.Use switch case to determine what action to take..
//provide error msg if input is wrong//
#include<stdio.h>
int main()
{
	int a,b,c,d,e,n,num;
	float lar,sma,sum,ave;
	printf("Enter a: ");
	scanf("%d",&a);
		printf("\n Enter b: ");
	scanf("%d",&b);
		printf("\n Enter c: ");
	scanf("%d",&c);
		printf("\n Enter d: ");
	scanf("%d",&d);
		printf("\n Enter e: ");
	scanf("%d",&e);
	switch (num)
	{
		case 1:
	    sum=a+b+c+d+e;
	    printf("%d",sum);
	    break;
	    
	    case 2:
	    	ave=sum/5 ;
	    	printf("%d",ave);
	    	break;
	}
	switch (a>b || b>c || c>d || d>e || e>a)
	{
		case 1:
			printf("largest number is %d",a);
			break;
		case 2:
			printf("largest number is %d",b);
			break;
		case 3:
			printf("largest number is %d",c);
			break;
		case 4:
			printf("largest number is %d",d);
			break;
		case 5:
			printf("largest number is %d",e);
			break;
	}
	return 0;	
}
