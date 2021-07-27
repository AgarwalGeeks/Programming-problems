#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<int>adj[],int v,int s)
{
	queue<int>q;
	vector<bool>visited(v);
	q.push(s);
	while(!q.empty())
	{
		int u=q.top();
		q.pop();
		cout<<u;
		for(int x:adj[u])
		{
				if(visited[x]==false)
					{
						q.push(x);
						visited[x]=true;
					}
			
		}		
			
	}
	
	
	
	
}
int main()
{
	
	
	
	
	
	
}
