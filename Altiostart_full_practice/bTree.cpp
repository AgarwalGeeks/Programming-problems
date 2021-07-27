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
	queue<Node *>q; // stack<Node *>s1,s2;
	q.push(root); // s1.push(root);
	
	while(!q.empty()) // while(!s1.empty() || !s2.empty())
	{
		// int nodeCount=q.size();        while(s1.empty()==false)
		//while(nodeCount)				 right->left
		Node *temp=q.front();
		cout<<temp->data;
		q.pop();
		
		if(temp->left!=NULL)
			q.push(temp->left);
			
		if(temp->right!=NULL)
			q.push(temp->right);
			
		//								while(s2.empty()==false)
		//									left->right
		// nodeCount--;
		
		
	}
	

	
	
}


bool checkForBST(Node *root)
{
	if(root==NULL)
		return true;
	
	if(root->right->data>root->data>root->left->data && checkForBST(root->left) && checkForBST(root->right))
		return true;
	
	return false;
		
}

bool identicalTree(Node *root1,Node *root2)
{
	if(root1==NULL && root2==NULL)
		return true;
		
	if(root1!=NULL && root2!=NULL)
		return
		{
			root1->data==root2->data &&
			identicalTree(root1->left,root2->left) &&
			identicalTree(root1->right,root2->right)
		
		
		};
	
	return false;
	
}

bool mirrorTree(Node *root1,Node *root2)
{
		if(root1==NULL && root2==NULL)
			return true;
		
		if(root1!=NULL && root2!=NULL)
		return
		{
			root1->data==root2->data &&
			mirrorTree(root1->left,root2->right) &&
			mirrorTree(root1->right,root2->left)
		
		
		};
	
	return false;
	
	
}

int height(Node *root)
{
	if(root==NULL)
		return 0;
	return 1+max(height(root->left),height(root->right));
	
	
}

bool isBalanced(Node *root)
{
	if(root==NULL)
		return true;
		
	leftHeight=height(root->left);
	rightHeight=height(root->right);
	
	if(abs(leftHeight,rightHeight)<=1 && isBalanced(root->left) && isBalanced(root->right))
		return true;
		
	return false;
	
}

Node* LCA(Node *root,int n1,int n2)
{
	if(root==NULL)
		return NULL;
	
	if(root->data>n1 && root->data>n2)
		LCA(root->left,n1,n2);
	
	if(root->data<n1 && root->data<n2)
		LCA(root->right,n1,n2);
	
	return root;
	
	
}

void leftView(Node *root,int level,int *max_level)
{
	if(root==NULL)
		return;
		
		
	if(*max_level<level)
	{
		cout<<root->data<<endl;
		max_level=level;
		
	}
	leftView(root->left,level+1,max_level);
	leftView(root->right,level+1,max_level);
	
	
}

