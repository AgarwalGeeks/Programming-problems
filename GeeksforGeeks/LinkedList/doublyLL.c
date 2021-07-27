#include<stdio.h>
#include<stdlib.h>
//using namespace std;

// defining the structure of node
typedef struct  
{
	int data;
	struct Node *next;
	//struct Node *prev;
}node;

// for printing the given singlyLL
void printList(node *headNode)
{
	while(headNode!=NULL)
	{
		printf("%d\n",headNode->data);
		headNode=headNode->next;
	}
	
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
	/*push(&head,30);
	
	printf("After push\n");
	printList(head);
	
	append(&head,100);
	printf("After append\n");
	printList(head);
	append(&head,1000);
	printList(head);
	insertAfter(head,60);
	printList(head);
	deleteNode(&head,1000);
	printf("After deletion\n");
	printList(head);
	deleteNode(&head,100);
	printf("After deletion\n");
	printList(head);*/
	//deleteNode(&head,78);
	//printList(head);
	deleteNodeAt(&head,2);
	printList(head);
}
