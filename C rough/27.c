//binary search
#include<stdio.h>
int main()
{
	int n,i,j,temp,arr[100],left,right,key,middle;
	printf("enter size of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter key: ");
	scanf("%d",&key);
	left=0;
	right=n-1;
	middle=(left+right)/2;
	printf("search element will be: ");
	while(left<=right)
	{
			if(arr[middle]==key)
			{
				printf("\nmiddle:%d",middle+1);
				return arr[middle];
			}
			else if(arr[middle]>key)
			{
				right=middle-1;
				printf("\nright:%d",right);
			}
			else if(arr[middle]<key)
			{
				left=middle+1;
				printf("\nleft:%d",left);
			}
			middle=(left+right)/2;
	}
	if(right>left)
	{
		printf("\nNode not found,key is not found");
	}
   return -1;
}
