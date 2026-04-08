#include "dijkstra.h"
#include <iostream>
#include <queue>

using namespace std;

void Dijkstra::shortestPath(vector<vector<pair<int,int>>>& adj,int src)
{
    int V = adj.size();

    vector<int> dist(V,1e9);

    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;

    dist[src]=0;

    pq.push({0,src});

    while(!pq.empty())
    {
        int node=pq.top().second;
        pq.pop();

        for(auto x:adj[node])
        {
            int neigh=x.first;
            int wt=x.second;

            if(dist[node]+wt<dist[neigh])
            {
                dist[neigh]=dist[node]+wt;
                pq.push({dist[neigh],neigh});
            }
        }
    }

    cout<<"\nShortest Distance from Router "<<src<<"\n";

    for(int i=0;i<V;i++)
        cout<<"Router "<<i<<" : "<<dist[i]<<endl;
}