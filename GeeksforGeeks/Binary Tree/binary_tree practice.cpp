#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node
{
	int data;
	Node *left;
	Node *right;
};
Node* newNode(int data)
{
	Node *node=(Node *)malloc(sizeof(Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int main()
{
	Node *root=newNode(1);
	
	root->left=newNode(2);
	root->right=newNode(3);
	
	
	
	
	
	
	
}
