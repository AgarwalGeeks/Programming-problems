void BFS(int source,vector<int>&adj[])
{
	queue<int>q;
	vector<bool>visited;
	q.push(source);
	visited[s]=true;
	while(!q.empty())
	{
		int u=q.front();
		cout<<node_data;
		q.pop();
		
		for(auto x : adj[u])
		{
			if(visited[u]==false)
			{
				q.push(u);
				visited[u]=true;
				
			}
			
			
		}
		
			
		
	}
	
	
}

void DFS(int source,vector<int>adj[],vector<bool>&visited)
{
	cout<<s;
	visited[s]=true;
	for(auto x: adj[s])
	{
		if(visited[x]==false)
			DFS(x,adj,visited);
	}	
	
}

bool isCycleDirected(vector<int>adj[],int source,vector<bool>&visited,vector<bool>&stack)
{
	
	if(visited[source]==false)
	{
		visited[source]=true;
		stack[source]=true;
		
		for(auto x: adj[source])
		{
			
			if(visited[x]==false && isCycleDirected(adj,x,visited,stack))
				return true;
			else if(stack[x]==true)
				return true;
		}
		
	}
	
	stack[source]=false;
	return false;
}

bool isCycleUnDirected(vector<int>adj[],int source,vector<bool>&visited,vector<bool>&stack)
{
	
	if(visited[source]==false)
	{
		visited[source]=true;
		stack[source]=true;
		
		for(auto x: adj[source])
		{
			
			if(visited[x]==false && isCycleUnDirected(adj,x,visited,stack))
				return true;
			else if(stack[x]==true)
				return true;
		}
		
	}
	
	stack[source]=false;
	return false;
}
int minDistance(int dist[],bool *sptset)
{
	int min=INT_MAX,min_index;
	for(int v=0;v<V;v++)
	{
		if(sptset[v]==false && dist[v]<=min)
			min=dist[v]; min_index=v;
	}
	return min_index;
	
}
void dikjkstra(int graph[V][V],int src)
{
	
	int dist[V];
	bool sptset[V];
	
	for(int i=0;i<V;i++)
	{
		dist[i]=INT_MAX;
		sptset[i]=false;
	}
	
	dist[src]=0;
	
	for(int count=0;count<V-1;count++)
	{
		
		int u=minDistance(dist,sptset);
		sptset[u]=true;
		
		for(int v=0;v<V;v++)
		{
			if(!sptset[v] && graph[u][v] && dist[v]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
				dist[v]=dist[u]+graph[u][v];
			
		}
		
		
	}
	
}

void floydwarshall(int graph[V][V],int src)
{
	
	int dist[V][V];
	
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			
			dist[i][j]=graph[i][j];
		}
		
	}
	
	for(int k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(dist[k][i]+dist[i][j]<dist[i][j])
					dist[i][j]=dist[k][i]+dist[i][j];
			}
		}
	}
	
	
	
	
}
