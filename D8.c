//WAP to find month of year that,given an integer between 1 to 12,print the corresponding month of year//
#include<stdio.h>
int main()
{
   int days,month,leapyear;
   printf("Enter month number(1-12): ");
   scanf("%d",&month);
   
   if(month == 1)
   {      
   printf("\n January");
   }
   
   else if(month == 2)
   {
   	printf("\n February");
   }
   else if(month == 3)
   {
   	printf("\n March");
   }
   else if(month == 4)
   {
   	printf("\n April ");
   }
   else if(month == 5)
   {
   	printf("\n May");
   }
   else if(month == 6)
   {
   	printf("\n June");
   }
   else if(month == 7)
   {
   	printf("\n July");
   }
   else if(month == 8)
   {
   	printf("\n August");
   }
   else if(month == 9)
   {
   	printf("\n September");
   }
   else if(month == 10)
   {
   	printf("\n October");
   }
   else if(month == 11)
   {
   	printf("\n November");
   }
   else if(month == 12)
   {
   	printf("\n December");
   }
   
   return 0;
}
