#include<stdio.h>
#include<stdlib.h>
void insertf();
void displayf();
int deletef();
void insertend();
struct node
{
	int info;
	struct node*link;
};
void main()
{
	int ch,x,i,y;
	do
	{
		printf("\n1-insert\n 2-display\n 3-delete\n 4-insert from end\n 5-delete last node\n 6-delete from specific position\n 7-Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			
			insertf(x);
			break;

			case 2:
			displayf(x);
			break;

			case 3:
			i=deletef();
			printf("\n deleted node:%d",i);
			break;

			case 4:
			insertend(y);
			break;

			case 5:
			i=deleteend();
			printf("\n deleted node:%d",i);
			break;

			/*case 6:
			i=deletesp();
			printf("\n delete from specific position:%d",i); */

			case 7:
			return ;

			default:
			printf("\n wrong input");
		}
	}
	while(ch!=6);
}
struct node* first=NULL;
void insertf(int x)
{
	struct node *node1;
	node1=(struct node*)malloc(sizeof(struct node));
	if(node1==NULL)
	{
		printf("\nData not available");
	}
	else
	{
		printf("x:");
		scanf("%d",&x);
		
		{
			node1 -> info=x;
			node1 -> link=first;
			first=node1;
		}
	}
}
void displayf()
{
	struct node * save=first;
	if(first==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		while(save!=NULL)
		{
			printf("%d\n",save->info);
			save=save->link;
		}
	}
}
/*int deletesp(int x)
{
	int m;
	struct node* save=first;
	struct node* pred;
	if(first==NULL)
	{
		printf("\n underflow");
	}
	while(save!=x && save->link!=NULL)
	{
		pred=save;
		save=save->link;
		if(save!=x)
		{
			printf("\nNode not found");
		}
		else
		{
		 if(x==first)
		
		{
			first=first->link;
			free(save);
		}
		else{
			printf("enter which node to be deleted:");
			scanf("%d",&m);
            pred->link= m -> link;
		}
		}
		free(x);
	}
} */
int deletef()
{
	int x;
	struct node*d =first;
	x=first->info;
	first=first->link;
	free(d);
	return x;
}
void insertend(int y)
{
	struct node* new;
	struct node * first;
	struct node* save;
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter element to enter at last: ");
	scanf("%d",&y);
	if(first==NULL)
	{
		printf("\n linked list empty");
	}
	else
	{
		save=first;
		while(save->link != NULL)
		{
			save=save->link;
			save->link=new;
			;
		}
	}
}
int deleteend()
{
	struct node* pred;
	struct node* save;
	if(first==NULL)
	{
		printf("underflow");
	}
	else
	{
		save=first;
		while(save->link!=NULL)
		{
			save=pred;
			
		}
		pred->link=NULL;
	}
}
