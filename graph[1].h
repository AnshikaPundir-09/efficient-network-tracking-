#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>

using namespace std;

class Graph
{
private:
    vector<vector<pair<int,int>>> adj;

public:
    void addRouter(); 
    void addConnection(int u,int v,int weight);
    void displayNetwork();
    int getSize();
    vector<vector<pair<int,int>>>& getAdj();
};

#endif