#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct nodetype
{
	int info;
	struct nodetype *next;
	}node;
void createmptylist(node **head);
void traverseinorder(node *head);
void insertatbeginning(node**head,int item);

	void main()
	{
	 node *head;
	 int choice,element,after;
	 createmptylist(&head);

	 while(1)
	 {
	 printf("operations available are\n");
	 printf("1. insert at begning\n");
	 printf("2. traverse in order\n");
	 printf("enter choice (1 or 2)");
	 scanf("%d",&choice);

	 switch(choice)
	 {
	 case 1:
	 printf("\n enter elemene");
	 scanf("%d",&element);
	 insertatbeginning(&head,element);
	 break;

	 case 2:
	 if(head==NULL)
	 printf("\n list is empty!");
	 else
	 traverseinorder(head);
	 printf("\n press any key to continue");
	 getch();
	 break;
	 default:
		 exit(0);
			 }
		 }
	 }
void createmptylist(node **head)
 {
 *head=NULL;
 }

void insertatbeginning(node **head,int item)
{
	 node *ptr;
	ptr=(node*)malloc(sizeof(node));
	ptr->info=item;
	if(*head==NULL)
		ptr->next=NULL;
	else
		ptr->next=*head;
		*head=ptr;
}
void traverseinorder(node *head)
{
	while(head!=NULL)
	{
	printf("\n%d",head->info);
	head=head->next;
	}
  }












