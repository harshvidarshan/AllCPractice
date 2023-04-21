#include <stdio.h>
#include<math.h>
int main(void) 
{
    int a,b,c,s;
    float area;
	// your code goes here
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(4);
    printf("%d",area);
    if(area>0)
    {
        printf("\nYES");
    }
    else 
    {
        printf("\nNO");
    }
	return 0;
}


