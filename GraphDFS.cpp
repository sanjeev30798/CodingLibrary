#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool visit[100];
void DFS(int s)
{
	visit[s]=true;
	cout<<s<<" ";
	for(int i=0;i<adj[s].size();++i)
	{
		if(visit[adj[s][i]]==false)
			DFS(adj[s][i]);
	}
}
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int i,n; // number of nodes
	cin>>n;
	int edges=0;// number of edges
	for(i=0;i<edges;++i)
	{
		int e1,e2;
		cin>>e1>>e2;
		adj[e1].push_back(e2);
		adj[e2].push_back(e1);			
	}
	memset(visit,false,sizeof visit);
	for(i=1;i<=n;++i)
	{
		if(visit[i]==false)
			DFS(i);
	}
}