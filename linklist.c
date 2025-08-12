#include"stdio.h"
#include"Linklist.h"
Node* CreateNode()
{
	Node *newnode;
	newnode=(Node*)malloc(sizeof(Node));
	printf("Enter data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}

Node* Createlist()
{

	Node *newnode1,*temp,*head=NULL;
	int ch=1;
	while(ch)
	{
		newnode1=CreateNode();
		if(head==NULL)
			temp=head=newnode1;
		else
		{
			temp->next=newnode1;
			temp=newnode1;
		}
		printf("Do you want to continue(1/0)\n");
		scanf("%i",&ch);
	}
	return head;
}

int CountNodes(Node *head)
{
	int count=0;
	Node *temp= head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
void Traverse(Node* head)
{
	Node *temp=head;
	if(temp==NULL)
		printf("List is empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
