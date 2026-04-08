#include "bfs.h"
#include <queue>
bfs::bfs(int v)
{
this->v = v;
l = new list<int>[v];
}
void bfs::addedge(int u,int v)
    {
    l[u].push_back(v);
    l[v].push_back(u);
}
int bfs::hopcount(int source,int dest)
   {
    vector<bool> visited(v,false);
    vector<int> dist(v,-1);
    for(int i=0;i<v;i++)
    {
        visited[i] = false;
        dist[i] = -1;
    }
    queue<int> q;
    visited[source] = true;
    dist[source] = 0;
    q.push(source);
    while(!q.empty())
    { int node = q.front();
         q.pop();
         for(int neigh : l[node])
        {if(!visited[neigh])
            {
                visited[neigh] = true;
                dist[neigh] = dist[node] + 1;
                q.push(neigh);
            }
        }
    }

 return dist[dest];
}