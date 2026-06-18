#include "GangGraph.h"

void GangGraph::addNode(int id) {
    adj[id];
}

void GangGraph::addEdge(int a, int b) {
    adj[a].insert(b);
    adj[b].insert(a);
}

void GangGraph::display() {
    cout << "\nGang Network:\n";
    for (auto &p : adj) {
        cout << p.first << " -> ";
        for (auto x : p.second)
            cout << x << " ";
        cout << endl;
    }
}

int GangGraph::edgeCount() {
    int c = 0;
    for (auto &p : adj)
        c += p.second.size();
    return c / 2;
}
