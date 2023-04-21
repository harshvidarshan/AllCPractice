#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;//linked list node
};
void main()
{
	//head pointer
	struct node* head;
	//sizeof declares how much size to be declared
	head=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&(head->data)); //arrow operator used bcoz of pointer
	printf("%d",(head->data));
	head -> link = NULL;
}

