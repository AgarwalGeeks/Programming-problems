#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct node
{
int key;
struct node *left,*right;
}Node;
Node * newNode(int data)
{
	Node *newNode=(Node *)malloc(sizeof(Node ));
	newNode->key=data;
	newNode->left=newNode->right=NULL;
	return newNode;
	
	
}
void postOrder(Node *head)
{
	if(head!=NULL)
	{
		
		postOrder(head->left);
		postOrder(head->right);
		cout<<head->key<<endl;
	}
	
	
	
}
void preOrder(Node *head)
{
	if(head!=NULL)
	{
		cout<<head->key<<endl;
		preOrder(head->left);
		preOrder(head->right);
	}
	
	
	
}
Node * minValueNode(Node *node)
{	Node *current=node;
	while(current->left!=NULL)
		current=current->left;
	return current;
}
void inOrder(Node *head)
{
	if(head!=NULL)
		{
		
		inOrder(head->left);
		cout<<head->key<<endl;
		inOrder(head->right);
		}		
	
} 
Node * insert(Node *head,int data)
{
	
	if(head==NULL)
		return newNode(data);
	if(data<head->key)
		head->left=insert(head->left,data);
	else if(data>head->key)
		head->right=insert(head->right,data);
	return head;
	
	
	
}
Node * deleteNode(Node *head,int data)
{
	if(head==NULL) return head;
	if(data<head->key)
		head->left=deleteNode(head->left,data);
	else if(data>head->key)
		head->right=deleteNode(head->right,data);
	else
	{
		if(head->left==NULL)
		{
			Node *temp =head->right;
			free(head);
			return temp;
			
		}
		else if(head->right==NULL)
		{
			Node *temp=head->left;
			free(head);
			return temp;
		}
		else
		{
			Node *temp=minValueNode(head->right);
			head->key=temp->key;
			head->right=deleteNode(head->right,temp->key);	
		}	
		
	}
	
return head;	
	
	
}
int main()
{
	
	Node *root=NULL;
	root=insert(root,50);
	insert(root,100);
	insert(root,40);
	insert(root,30);
	insert(root,29);
	insert(root,10);
	inOrder(root);	
	Node *d=deleteNode(root,29);
	inOrder(root);
	cout<<d->key;
}
