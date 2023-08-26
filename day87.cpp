// There are N stones in a pond, each having a value Ai? written on it. A frog is at stone 1 and wants to reach 
// stone N. The frog can jump from a stone i to any stone j(j>i). Let d be the length of subarray (i.e. j−i+1), 
// then the energy required for the jump is (d⋅Ai?)−Aj?. Find the minimum non-negative amount of energy required 
// by the frog to reach the N-th stone.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    int ans = v[0];
    int mn = v[0];
    for(int i=1;i<n;i++){
        ans += mn;
        mn = min(v[i],mn);
    }

    ans -= v[n-1];
    int y=0;
    cout << max(ans,y) << endl;
}