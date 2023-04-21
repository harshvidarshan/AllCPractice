//read n numbers in an array and print it using pointer
#include<stdio.h>
void main()
{
  int i,n,arr[100],*m;
  printf("n: ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  	printf("enter array elements arr[%d]: ",i);
  	scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++)
  {
  	m= &arr[i];
  	printf("\narray elements are: %d",*m);
  }
}
