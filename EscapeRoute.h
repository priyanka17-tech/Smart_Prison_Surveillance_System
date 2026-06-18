#ifndef ESCAPE_ROUTE_H
#define ESCAPE_ROUTE_H

#include <map>
#include <vector>
#include <set>

class EscapeRoute {
    std::map<int, std::vector<int>> graph;
    std::set<int> vis;

    void dfs(int node);

public:
    EscapeRoute();
    void runDemo();
    void addPath(int a, int b);
};

#endif