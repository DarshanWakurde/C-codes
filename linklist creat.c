#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *list;
};

int main(){
	struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->list=NULL;
	
	struct node *current=NULL;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=98;
	current->list=NULL;
	head->list=current;
	
	struct node *next=NULL;
	next=(struct node*)malloc(sizeof(struct node));
	next->data=8;
	next->list=NULL;
	current->list=next;
	
	printf("%d %d\n",head->data,head->list);
	printf("%d %d\n",current->data,current->list);
	printf("%d %d",next->data,next->list);
	
	return 0;
}
