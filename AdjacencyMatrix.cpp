#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<vector<int>>&adj,int u,int v)
{
	adj[u][v]=1;
    	// for undirected graph
		adj[v][u]=1;
}
printGraph(vector<vector<int>>adj,int u)
{
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<u;j++)
			cout<<adj[i][j]<<"";
		cout<<endl;
	}
	
	
	
}

int main()
{
	vector<vector<int> > adj{ { 0, 0, 0 }, 
                               { 0, 0, 0 }, 
                               { 0, 0, 0 } }; 
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	printGraph(adj,3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
