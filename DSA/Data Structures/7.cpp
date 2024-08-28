// Graphs

#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void printGraph();
};

Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::printGraph()
{
    for (int v = 0; v < V; ++v)
    {
        cout << "Adjacency list of vertex " << v << ":";
        for (auto x : adj[v])
            cout << " -> " << x;
        cout << endl;
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.printGraph();

    return 0;
}