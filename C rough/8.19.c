//read node,print node and release the memory of the node
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
};
void main()
{
	int x;
	struct node * node1;
	node1=(struct node*)malloc(sizeof(struct node));
	if(node1==NULL)
	{
		printf("\ndata not available");
	}
	else
	{
		printf("x:");
		scanf("%d",&x);
		node1->info=x;
		node1->link=NULL;
		printf("%d\n",node1->info);
		free(node1);
	}
}
