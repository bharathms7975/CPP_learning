#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;
    // direction == true (directed graph)
    // direction == false (undirected graph)
    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        if (direction == false)
        {
            adj[v].push_back(u);
        }
    }

    void printaAdjacent()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g;  // graph object creation
    int n, m; // n-> nodes  , m-> edges
    cout << "Enter number of nodes: " << endl;
    cin >> n;
    cout << "Enter number of edges: " << endl;
    cin >> m;

    cout << "Enter u,v: " << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, false);
    }
    cout << endl;
    cout << "Printing adjacent nodes of a graph:" << endl;
    g.printaAdjacent();

    return 0;
}
