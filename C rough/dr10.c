//structure employee detail
#include<stdio.h>
struct 
employee{
	int eid;
	char name[10];
	char des[10];
	float salary;
};
void main()
{
	struct employee emp ;
	printf("empid: ");
	scanf("%d",&emp.eid);
	printf("empsalary: ");
	scanf("%f",&emp.salary);
	printf("emp name: ");
	scanf("%s",&emp.name);
	printf("emp des: ");
	scanf("%s",&emp.des);
	
	printf("employee name, salary, designation, id:%s %f %s %d ",emp.name,emp.salary,emp.des,emp.eid);
}

