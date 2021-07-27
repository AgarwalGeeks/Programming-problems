#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	// for undirected graph
	adj[v].push_back(u);	
}
printGraph(vector<int>adj[],int u)
{
	for(int i=0;i<u;i++)
	{
		cout<<i;
		for(int x:adj[i])
			cout<<"->"<<x;
		cout<<endl;
	}
	
	
	
}

int main()
{
	vector<int>adj[3];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	printGraph(adj,3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
