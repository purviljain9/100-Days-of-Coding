// You are given an undirected graph with N nodes (numbered 1 through N) and M edges. Each edge connects two distinct 
// nodes. However, there may be multiple edges connecting the same pairs of nodes, and they are considered to be 
// distinct edges. A lowercase English letter is written in each node.
#include <iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
#define int long long
#define task "c"
#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define pb push_back
#define fi first
#define se second
typedef pair<int,int> ii;
const int mod = 1e9 + 7;
const int N = 1e3 + 5;
int n, m, l, b[N], dp[N][25], dd[N][25], cnt[N][N], p[N];
string s, c;
vector<int> a[N];
int power(int x, int y) {
    if (y == 0) return 1;
    int k = power(x, y / 2);
    return 1ll * k * k % mod * (y & 1 ? x : 1) % mod;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    if(fopen(task".inp", "r")){
        freopen(task".inp", "r", stdin);
    }
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> m >> l >> s >> c;
        s = ' ' + s; c = ' ' + c;
        FOR(i, 1, m)cin >> b[i];
        FOR(i, 1, m){
            int u = b[i];
            int v; cin >> v;
            a[u].pb(v), a[v].pb(u);
            if(u > v)swap(u, v);
            cnt[u][v]++;
        }
        queue<ii> q;
        FOR(i, 1, n)if(c[i] == s[1]){
            dd[i][1] = dp[i][1] = 1;
            q.push(ii(i, 1));
        }
        int res = 0;
        while(!q.empty()){
            int u = q.front().fi, i = q.front().se;
            q.pop();
            if(i == l){
                (res += dp[u][i]) %= mod;
                continue;
            }
            for(auto v : a[u])if(c[v] == s[i+1]){
                (dp[v][i+1] += dp[u][i]) %= mod;
                if(!dd[v][i+1]){
                    dd[v][i+1] = 1;
                    q.push(ii(v, i+1));
                }
            }
        }
        int same = 1;
        for (int i = 2; i < s.size(); i++) {
            if (s[i] != s[1]) {
                same = 0;
                break;
            }
        }
        if (same) {
            for (int i = 0; i <= m; i++) 
                p[i] = power(i, l - 1);
            for (int u = 1; u <= n; u++) {
                if (c[u] != s[1]) continue;
                for (int v = u + 1; v <= n; v++) {
                    if (c[v] != s[1]) continue;
                    res -= p[cnt[u][v]];
                    if (res < 0) res += mod;
                }
            }
        }
        cout << res << endl;
        FOR(i, 1, n){
            FOR(j, i+1, n)cnt[i][j] = 0;
            a[i].clear();
            memset(dp[i], 0, sizeof dp[i]);
            memset(dd[i], 0, sizeof dd[i]);
        }
    }
}