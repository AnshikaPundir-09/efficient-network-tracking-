#ifndef BFS_H
#define BFS_H
#include<iostream>
#include<list>
using namespace std;
class bfs
   {
    int v;
    list<int>* l;
    public:
    bfs(int v);
    void addedge(int u,int v);
    int hopcount(int source,int dest);   

};
#endif