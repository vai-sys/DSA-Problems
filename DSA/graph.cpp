#include <iostream>
#include <vector>

using namespace std;

void addEdge(int u, int v, vector<vector<int>>& adj) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    cout << "Enter the number of vertices: ";
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1); 

    int edges;
    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, adj);
    }

    cout << "\nAdjacency List:\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
