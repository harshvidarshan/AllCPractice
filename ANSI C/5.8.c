#include<stdio.h>
int main()
{
	int amt,m;
	float netaamt;
	printf("amt:");
	scanf("%d",&amt);
	m=amt/100;
	switch (m)
	{
		case 1:
			printf("%0.2f",amt*0.5);
			break;
		case 2:
			printf("%0.2f",amt*0.125);
			break;
		case 3:
			printf("%0.2f",amt*0.175);
			break;
		case 4:
				printf("%0.2f",amt*0.25);
			break;
			default:
					printf("%0.2f",amt*0);
				break;
	}
}
