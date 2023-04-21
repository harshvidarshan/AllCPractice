#include <stdio.h>
int countDistinct(int a[], int n)      //Function Definition
{
   int i, j, count = 1,sum=0;
   //Traverse the array
   for (i = 1; i < n; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (a[i] == a[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         count++; 
		 sum=sum+a[i];    //increment the number of distinct elements
      }
   }
   printf("sum:%d\n",sum);
   return count;      //Return the number of distinct elements
}
int main()
{
    int n,i;       //Declare array size
    printf("Enter the number of elements \n");
    scanf("%d",&n);    //Initialize the array size

    int a[n];   //Array Declaration
    printf("Enter the array elements : ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);   //Initialize the array elements

    int c= countDistinct(a,n);       //Function Call
    printf("The number of distinct elements are %d",c);   //Print the number of distinct elements
    return 0;
}

