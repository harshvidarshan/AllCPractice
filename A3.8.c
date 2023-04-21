//enter month number(1-12) and print no. of days in month (using else if ladder)//
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
   else if(month == 2)
   {
   	printf("\n 29 Days or 28 Days");
   }
   else
   {
   	printf("\n Invalid Input! Please enter month number between(1-12)");
   }
   return 0;
}
