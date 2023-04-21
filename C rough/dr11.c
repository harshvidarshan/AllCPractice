//student detail of 5 student enrollno,name,cpi,sem
#include<stdio.h>
struct student{
int eno,sem;
char name[10];	
float cpi;
};
void main()
{
	struct student s[10];
	int i;
	for(i=1;i<=5;i++)
	{
		printf("Enter Name: ");
		scanf("%s",&s[i].name);
		printf("Enter sem: ");
		scanf("%d",&s[i].sem);
		printf("Enter eno: ");
		scanf("%d",&s[i].eno);
		printf("enter cpi: ");
		scanf("%f",&s[i].cpi);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n ");
		printf("\nEnter name:%s",s[i].name);
		printf("\nEnter sem:%d",s[i].sem);
		printf("\nEnter eno:%d",s[i].eno);
		printf("\nEnter cpi:%0.2f",s[i].cpi);
	}
}

