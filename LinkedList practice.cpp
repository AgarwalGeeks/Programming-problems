#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node 
{
	int data;
	Node *next;
};
void printList(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data;
		n=n->next;
	}
}
void addNode(Node **n,int data)
{
	Node *temp=*n;
	Node *newNode=(Node*)malloc(sizeof(Node));	
	newNode->data=data;
	while(temp!=NULL)
	{
		temp=temp->next;
	}
	temp=newNode;
	newNode->next=NULL;
	
}
int main()
{
	Node *head=NULL;
	addNode(&head,10);
	printList(head);
	
}
