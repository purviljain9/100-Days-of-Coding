// Let X be the set of all integers between 0 and n-1. Suppose we have a collection S1, S2, ..., Sm of subsets of
// X. Say an atom A is a subset of X such that for each Si we have either A is a subset of Si or A and Si do not
// have any common elements.Your task is to find a collection A1, ..., Ak of atoms such that every item in X is 
// in some Ai and no two Ai, Aj with i ≠ j share a common item. Surely such a collection exists as we could create
// a single set {x} for each x in X. A more interesting question is to minimize k, the number of atoms.
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
const int MAXM = 30;
int uf[MAXN], s[MAXN];
int parent(int v) {
    if (v == uf[v]) return v;
    return uf[v] = parent(uf[v]);
}
void merge(int u, int v) {
    uf[parent(u)] = parent(v);
}
int main() 
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        uf[i] = i;
        s[i] = 0;
    }
    for (int i = 0; i < m; ++i) {
        int k, l;
        cin >> k;
        while (k--) {
            cin >> l;
            s[l] |= (1 << i);
        }
    }
    int ans = n;
    vector<bool> vis(n, false);
    for (int i = 0; i < n; ++i)
    {   
        if(vis[i]) continue;
        for (int j = i+1; j < n; ++j)
        {
            if (s[i] == s[j])
            {
                vis[j] = true;
                ans--;
            }
        }
        vis[i]=true;
    }
    cout << ans << endl;
}