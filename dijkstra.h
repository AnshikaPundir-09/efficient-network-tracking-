#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>

using namespace std;

class Dijkstra
{
public:
    void shortestPath(vector<vector<pair<int,int>>>& adj,int src);
};

#endif