//initialising,accessing,declaring array(single and for loop),postive or negative or zero count numbers//sum of n arrays//average of n arrays//largest number in array//
// sum of second and second last element of array//count odd or even numbers//
#include<stdio.h>
int main()
{
/*	int marks[3];
	printf("Enter mark of student 1: ");
	scanf("%d",&marks[0]);
	printf("Enter mark of student 2: ");
	scanf("%d",&marks[1]);
	printf("Enter mark of student 3: ");
	scanf("%d",&marks[2]);
	printf("%d",marks[0]);
	printf("\n%d",marks[1]);
	printf("\n%d",marks[2]);
	return 0;
}*/  // for loop
   /* int i,n,marks[i];
    printf("No. of array elements: ");
    scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
		printf("enter marks: ");
	    scanf("%d",&marks[i]);
	 } 
	for(i=0;i<n;i++)  
	{
		 printf("\n %d",marks[i]);
	}
	 return 0;
} */
   /* int i,n,num[i],pos=0,neg=0,zero=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n Enter number: ");
    	scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if(num[i]>0)
		pos=pos+1;
		else if(num[i]<0)
		neg=neg+1;
		else
		zero=zero+1;
	}
	printf("\n%d are no. of positive arrays",pos);
		printf("\n%d are no. of negative arrays",neg);
			printf("\n%d are no. of zero arrays",zero);
    return 0; */
   /* int i,n,num[i];
     printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n Enter number: ");
    	scanf("%d",&num[i]);
	}
    for(i=n-1;i>=0;i--)
    {
    	printf("\n reverse order=%d\n",num[i]);
	}
	return 0; */
	/* int i,n,num[i];
	int sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	printf("Enter sum=%d",sum);
	return 0; */
/*	int i,n,num[i];
	int sum=0;
	float average=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
		average=(sum/n);
	}
	printf("Enter sum=%d",sum);
	printf("\n Enter average=%0.2f",average);
	return 0; */
/*	int i,n,num[i];
	int largestnumber;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&num[i]);
	}
	largestnumber=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>largestnumber)
		largestnumber=num[i];
	}
	printf("Enter largest number=%d",largestnumber);
	return 0; */
/*	int i,n,num[i];
	int sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=num[i-1]+num[1];
	}
	printf("Enter sum=%d",sum);
	return 0; */

	int i,num[100],n;
	int odd=0,even=0;
		printf("Enter no. of array elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
				printf("Enter array elements: ");
		scanf("%d",&num[i]);
		}
		for(i=0;i<n;i++)
		{
			if(num[i]%2==0)
			even=even+1;
			else 
			odd=odd+1;
	}
	printf("\n%d are even numbers",even);
		printf("\n%d are odd numbers",odd);
		return 0;
}

