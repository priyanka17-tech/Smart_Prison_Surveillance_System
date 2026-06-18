#include "EscapeRoute.h"
#include <iostream>
using namespace std;

EscapeRoute::EscapeRoute() {
    addPath(1,2);
    addPath(2,3);
    addPath(3,4);
    addPath(4,5);
}

void EscapeRoute::addPath(int a, int b) {
    graph[a].push_back(b);
    graph[b].push_back(a);
}

void EscapeRoute::dfs(int node) {
    vis.insert(node);
    cout << node << " ";

    for (int x : graph[node]) {
        if (!vis.count(x))
            dfs(x);
    }
}

void EscapeRoute::runDemo() {
    vis.clear();
    cout << "DFS: ";
    dfs(1);
    cout << endl;
}