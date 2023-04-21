/*   1
    A B
   2 3 4
  C D E F
 5 6 7 8 9 */
 #include<stdio.h>
 int main()
 {
 	int i,j,k,m=1,n=5;
 	char ch='A';
 	for(i=1; i<=n ; i++)
 	{
 		for(j=n-i; i>=1 ; i--)
 		{
 			printf(" ");
		 }
		 for(k=1;k<=i;k++)
		 {
		 	if(i%2==0)
		 	{
		 		printf("%c ",ch);
		 		ch++;
			 }
			 else
			 {
			 printf("%d ",m);
			 m++;
		}
		 }
		 printf("\n");
	 }
 	 return 0;
 }
