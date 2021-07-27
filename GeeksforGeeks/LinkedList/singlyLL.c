#include<stdio.h>
#include<stdlib.h>
//using namespace std;

// defining the structure of node
typedef struct  
{
	int data;
	struct Node *next;
}node;

// for printing the given singlyLL
void printList(node *headNode)
{
	while(headNode!=NULL)
	{
		printf("%d\n",headNode->data);
		headNode=headNode->next;
	}
	if(headNode==NULL)
		printf("List is Empty\n");
	
}

// function to add node at front

void push(node **n,int newData)
{
	node *newNode=NULL;
	newNode=(node *)malloc(sizeof(node));
	newNode->data=newData;
	newNode->next=*n;
	*n=newNode;
}

// function to append node at end
void append(node **m,int nodeData)
{
	node *lastNode,*temp;
	temp=*m;
	lastNode=(node *)malloc(sizeof(node));
	lastNode->data=nodeData;
	lastNode->next=NULL;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=lastNode;
}

// function to insertAfter
void insertAfter(node *p,int dataNode)
{
	
	if (p == NULL) 
    { 
      printf("the given previous node cannot be NULL"); 
      return; 
    }
    
	node *insertAfterNode=NULL;
	insertAfterNode=(node *)malloc(sizeof(node));
	insertAfterNode->data=dataNode;
	
	// Logic
	insertAfterNode->next=p->next;
	p->next=insertAfterNode;
	
	
	
	
}

// function to delete  a node
void deleteNode(node **h,int key)
{
	node *temp=*h,*prev;
	if(temp!=NULL && temp->data==key)
	{
		*h=temp->next;
		free(temp);
		return;
	}
	
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
		if(temp->next==NULL)
			printf("Key is not in LL\n");
		
	}
	
	if(temp==NULL) return;
	prev->next=temp->next;
	free(temp);
	
	
}
// function to delete a node at given position
void deleteNodeAt(node **h,int location)
{
	node *temp=*h,*prev;
	if(location==0)
		{
			*h=temp->next;
			free(temp);
			return;
		}
	while(location--)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL) return;
	prev->next=temp->next;
	free(temp);
	
	
	
	
}
// function to delete entire List
void deleteList(node **head)
{
	node *h=*head,*next;
	while(h!=NULL)
	{
		next=h->next;
		free(h);
		h=next;
		
	}
	printf("List Deleted");	
}

int main()
{
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	head=(node*)malloc(sizeof(node));
	second=(node*)malloc(sizeof(node));
	third=(node*)malloc(sizeof(node));
	
	// giving data
	
	head->data=5;
	head->next=second;
	
	second->data=10;
	second->next=third;
	
	third->data=15;
	third->next=NULL;
	
	
	// calling printList function
	
	printList(head);
	push(&head,30);
	
	printf("After push\n");
	printList(head);
	
	append(&head,100);
	printf("After append\n");
	printList(head);
	append(&head,1000);
	printList(head);
	insertAfter(head,60);
	printList(head);
	deleteList(&head);
	printList(head);
	
}
