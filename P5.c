#include<stdio.h>
int main()
{	
   int days,month,leapyear;
   printf("Enter month number(1-12): ");
   scanf("%d",&month);
   
   if(month == 1 || month==3 || month==5 || month==7 || month==8 || month==10|| month==12)
   {      
   printf("\n 31 Days");
   }
   
   else if(month == 4 || month ==6 || month==9 || month==11)
   {
   	printf("\n 30 Days");
   }
   else if( "leap year")
   {
   	printf("\n 29 Days");
   }
   else
   {
   	printf("\n 28 Days ");
   }
   return 0;
}
