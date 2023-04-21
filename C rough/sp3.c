//to display stud. info using array and struc
#include<stdio.h>
struct friends{
	char name[40];
	int roll;
};
int main(){
	int n=2,i;
	struct friends f[30];
	for(i=1;i<=n;i++)
	{
	printf("enter f name:");
	scanf("%s",&f[i].name);
		printf("enter f roll:");
	scanf("%d",&f[i].roll);
}
printf("\n\tName\tRoll\n");
for(i=1;i<=n;i++)
{
	printf("\t%s\t%d\t\n",f[i].name,f[i].roll);
}
return 0;
}
