//WAP,which will require user to give values of hardness,carbon content and tensile strength under consideration and output the grade of the steel//
#include<stdio.h>
int main()
{
	int a;
	float b;
	int c;
	printf(" hardness: ");
	scanf("%d",&a);
	printf("\n carbon content: ");
	scanf("%f",&b);
	printf("\n tensile strength: ");
	scanf("\n %d",&c);
	
	if(a>50 && b<0.7 && c>5600)
	{
	printf("\n Grade 10");
}
else if(a>50 && b<0.7)
{
	printf("\n Grade 9");
}
else if(b<0.7 && c>5600 )
{
	printf("\n Grade 8");
}
else if(a>50 && c>5600 && b>0.7)
{
	printf("\n Grade 7");
}
else if(a>50)
{
	printf("\n Grade 6");
}
else 
{
	printf("\n Grade 5");
}
return 0;
}
