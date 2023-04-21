#include<stdio.h>
#include<string.h>
void main()
{
	int x;
	char name[7]={'h','a','r','s','h','v','i'};
	char surname[100],y;
	printf(" %s",name);
	printf("enter surname: ");
	scanf("%s",surname);
	x=strlen(name);
	printf("\n length of string:%d",x);
	y=strcpy(name);
	printf("\n copy other string:%s",y);
}
