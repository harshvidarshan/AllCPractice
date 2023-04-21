//company insures.. WAP driver gets insured or not//
#include<stdio.h>
int main()
{
	char a,b;
	char male_female;
	char any;
	int c;
    printf("Enter martial status: ");
	scanf("%s",&a);
	printf("Enter sex: ");
	scanf("%s",&b);
	printf("Enter age: ");
	scanf("%d",&c);
	if(a ='M' && b=='m' || b=='f' && c=='any')
	{
		printf("Driver gets insurance");
	}
	else{	
    if(a!='U' && b=='m' && c>=30)
	{
		printf("Driver gets insurance");
	}
	else if(a!='U' && b=='f' && c>=25)
	{
		printf("Driver gets insurance");
	}
	else
	{
		printf("Driver doesn't gets insurance");
	}
}
}
