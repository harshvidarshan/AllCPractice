//structure of student_detail for 5 students
#include<stdio.h>
struct student_detail
{
	int eno;
	char name[10];
	int sem;
	float cpi;
};
void main()
{
	int i;
	struct student_detail s[5];
	for(i=0;i<2;i++)
	{
		printf("STUDENT ENO: ");
		scanf("%d",&s[i].eno);
		printf("STUDENT NAME: ");
		scanf("%s",&s[i].name);
		printf("STUDENT SEM: ");
		scanf("%d",&s[i].sem);
		printf("STUDENT CPI: ");
		scanf("%f",&s[i].cpi);
	}
	for(i=0;i<2;i++)
	{
		printf("-----------------------");
		printf("\nSTUDENT ENO:%d",s[i].eno);
		printf("\nSTUDENT NAME:%s",s[i].name);
		printf("\nSTUDENT SEM:%d",s[i].sem);
		printf("\nSTUDENT CPI:%0.2f",s[i].cpi);
	}
}

