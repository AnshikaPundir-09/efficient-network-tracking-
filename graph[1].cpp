#include "graph.h"

void Graph::addRouter()
{
    adj.push_back(vector<pair<int,int>>());
}

void Graph::addConnection(int u,int v,int weight)
{
    if(u>=adj.size() || v>=adj.size())
    {
        cout<<"Invalid router number\n";
        return;
    }

    adj[u].push_back({v,weight});
    adj[v].push_back({u,weight});
}

void Graph::displayNetwork()
{
    cout<<"\nNetwork Connections\n";

    for(int i=0;i<adj.size();i++)
    {
        cout<<"Router "<<i<<" -> ";

        for(auto x:adj[i])
        {
            cout<<"("<<x.first<<", wt="<<x.second<<") ";
        }

        cout<<endl;
    }
}

int Graph::getSize()
{
    return adj.size();
}

vector<vector<pair<int,int>>>& Graph::getAdj()
{
    return adj;
}