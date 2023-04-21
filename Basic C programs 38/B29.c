//Cal. Average score for a course with 4 quizzes,2,midterms and a final.The quizzes are weighted 30%,midterms 40 % and final 30%//
#include<stdio.h>
#include<conio.h>
int main()
{
    float	final,q1,q2,q3,q4,md1,md2,qa,mta,average;
	printf("Please enter your all marks :");
	printf("\n Marks for quiz :");
	printf("\n Quiz 1 :");
	scanf("%f",&q1);
	printf("\n Quiz 2 :");
	scanf("%f",&q2);
	printf("\n Quiz 3 :");
	scanf("%f",&q3);
	printf("\n Quiz 4 :");
	scanf("%f",&q4);
	qa=(q1+q2+q3+q4)/4;
	printf("Average of quiz:%.2f",qa);
		printf("\n Mid terms marks :");
	printf("\n Midterm 1 :");
	scanf("%f",&md1);
	printf("\n Midterm 2 :");
	scanf("%f",&md2);
	mta=(md1+md2)/2 ;
	printf("Average of mid-terms %.2f",mta);
	printf("\nFinal term marks :");
	scanf("%f",&final);
	printf("Average of final term :%f",final);
	average=(qa*0.3)+(mta*0.4)+(final*0.3);
	printf("\n Average score %.2f",average);
	return 0;
}
