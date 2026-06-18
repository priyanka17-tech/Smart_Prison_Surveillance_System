#ifndef GANG_GRAPH_H
#define GANG_GRAPH_H

#include <iostream>
#include <map>
#include <set>
using namespace std;

class GangGraph {
private:
    map<int, set<int>> adj;

public:
    void addNode(int id);
    void addEdge(int a, int b);
    void display();
    int edgeCount();
};

#endif
