#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inOrder(Node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<root->data;
		inOrder(root->right);
			
	}
		
}
void preOrder(Node *root)
{
	if(root!=NULL)
	{
		cout<<root->data;
		preOrder(root->left);
		preOrder(root->right);
			
	}
		
}
void postOrder(Node *root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data;
			
	}
		
}
void levelOrder(Node *root)
{
	if(root==NULL)
		return;
	queue<Node *>q;
	q.push(root);
	while(!q.empty())
	{
		Node *x=q.front();
		q.pop();
		cout<<x->data;
		if(x->left!=NULL)
			q.push(x->left);
		if(x->right!=NULL)
			q.push(x->right);
			
	}
		
}
void LineByLevelOrder(Node *root)
{
	if(root==NULL)
		return;
	queue<Node *>q;
	q.push(root);
	while(!q.empty())
	{
		int NodeCount=q.size();
		while(NodeCount)
		{
		Node *x=q.front();
		cout<<x->data;
		q.pop();
		if(x->left!=NULL)
			q.push(x->left);
		if(x->right!=NULL)
			q.push(x->right);
		NodeCount--;
		
		}
		
		cout<<endl;
			
	}
		
}
int main()
{
	
	
	
	
	
	
	
	
	
	
}
