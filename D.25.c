//boxer's weight n boxerclass//
#include<stdio.h>
int main()
{
		int weight;
		printf("Enter Boxer's Weight: ");
		scanf("%d",&weight);
		if(weight<115)
	{
	printf("Flyweight"); 
	}
		else if(115<=weight && 121>=weight)
	{
	printf("Bantam Weight"); 
	}
		else if(122<=weight && 153>=weight)
	{
			printf("Featheweight"); 
			}
		else if(154<=weight && 189>=weight)
	{
			printf("Middleweight"); 
			}
		else
	{
		printf("Heavyweight"); 
		}
		return 0;
}
