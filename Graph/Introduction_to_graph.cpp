#include <bits/stdc++.h>
using namespace std;

void adjacency_matrix_method() {
    int n, m;
    cout << "Enter the number of nodes (n) and edges (m): ";
    cin >> n >> m;

    // Create adjacency matrix initialized with 0
    int adj[n+1][n+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            adj[i][j] = 0;
        }
    }

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        // Since graph is undirected
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // Print adjacency matrix
    cout << "\nAdjacency Matrix:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

void list_method() {
    int n, m;
    cout << "Enter the number of nodes (n) and edges (m): ";
    cin >> n >> m;

    vector<int> adj[n+1]; // adjacency list

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        // Since the graph is undirected
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    cout << "\nAdjacency List:\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    adjacency_matrix_method();
    return 0;
}
