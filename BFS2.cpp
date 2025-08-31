#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100],res;
int vis[100];
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source]=1;
    while(!q .empty() )
    {
        int cur=q.front();
        q.pop();
        for(int i=0;i<adj[cur].size();i++)
        {
            int neighber=adj[cur][i];
            if(vis[neighber]==0)
            {
                vis[neighber]=1;
                q.push(neighber);
                res.push_back (neighber);
            }
        }
    }
}
int main(){
int node,edge,u,v;
cin>>node>>edge;
for(int i=0;i<edge;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

}
bfs(0);
cout<<"BFS Traversal: "<<endl;
for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
}

    }


