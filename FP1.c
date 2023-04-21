//WAP to calculate Simple interest using function//
#include<stdio.h>
int interest(int , int , int );   //for decimal values place float in place of int//
int main()
{
	int P,R,N,S;
	printf("Enter P: ");
	scanf("%d",&P);
		printf("Enter R: ");
	scanf("%d",&R);
		printf("Enter N: ");
	scanf("%d",&N);
	S=interest(P,R,N);
	printf("Simple interest:%d",S);	
}
int interest(int P,int R,int N)
{
	int S;
	S=(P*R*N)/100;
	return S;
}
