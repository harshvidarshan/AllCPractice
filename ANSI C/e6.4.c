#include<stdio.h>
int main()
{
	int m,n,i,j,total,roll,marks;
	printf("Enter Subjects and Students: ");
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++)
	{
		scanf("Enter Roll No.:%d\n",&roll);
		total=0;
		for(j=1;j<=m;j++)
		{
			scanf("%d",&marks);
			total=total+marks;
		}
		printf("\nTotal Marks=%d",total);
		if(total>=360)
		printf("\nFirst Class\n");
		else if(total>=240)
		printf("\nSecond Class\n");
		else
		printf("\nFail");
	}
	return 0;
}
