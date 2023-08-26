// Arun has a rooted tree of N vertices rooted at vertex 1. Each vertex can either be coloured black or white.
// Initially, the vertices are coloured A1?,A2?,…AN?, where Ai? ∈ {0,1} denotes the colour of the i-th vertex 
// (here 0 represents white and 1 represents black). He wants to perform some operations to change the colouring 
// of the vertices to B1?,B2?,…BN? respectively.
// Arun can perform the following operation any number of times. In one operation, he can choose any subtree and 
// either paint all its vertices white or all its vertices black.
// Help Arun find the minimum number of operations required to change the colouring of the vertices to B1?,B2?,
// …BN? respectively.
#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, 
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<vector<int>> dp(n, vector<int> (2));
    function<void(int, int)> dfs = [&](int u, int p) {
        for (int v : adj[u])
            if (v != p) {
                dfs(v, u);
                dp[u][1] += dp[v][1];
                dp[u][0] += dp[v][0];
            }
        if (a[u] != b[u])
            dp[u][0] = dp[u][1] + 1;
        dp[u][0] = min(dp[u][0], dp[u][1] + 1);
        if (b[u] != b[p]) dp[u][1]++;
    };
    dfs(0, 0);
    cout << dp[0][0] << endl;
}

int main() {
    int t = 1;
    cin >> t;
    for (int te = 0; t--;){
        solve();
    }
}