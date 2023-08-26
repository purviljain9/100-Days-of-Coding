// You are given N integers. In each step you can choose some K of the remaining numbers and delete them, if the 
// following condition holds: Let the K numbers you've chosen be a1, a2, a3, ..., aK in sorted order. Then, for 
// each i ≤ K - 1, ai+1 must be greater than or equal to ai * C.
// You are asked to calculate the maximum number of steps you can possibly make.
// Input
// The first line of the input contains an integer T, denoting the number of test cases. The description of each 
// testcase follows.
// The first line of each testcase contains three integers: N, K, and C
// The second line of each testcase contains the N initial numbers
// Output
// For each test case output the answer in a new line.
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int mxN = 3e5;
const long long INF = 2e18;
int n, k, c;
long long a[mxN];
long long mul(long long x, long long y) {
    if ((long double)x*y>=INF)
    return INF;
    return min(x*y, INF);
}

bool ok(int x) {
    vector<long long> v(a, a+x);
    int ind=x;
    for (int r=1; r<k; ++r) {
        for (long long& i : v) {
            long long need=mul(i, c);
            while(ind<n&&a[ind]<need)
                ++ind;
            if (ind==n)
                return 0;
            i=a[ind++];
        }
    }
    return 1;
}

void solve() {
    cin >> n >> k >> c;
    for (int i=0; i<n; ++i)
        cin >> a[i];
    sort(a, a+n);
    int lb=0, rb=n/k;
    while(lb<rb) {
        int mid=(lb+rb+1)/2;
        if (ok(mid))
            lb=mid;
        else
            rb=mid-1;
    }
    cout << lb << endl;
}

int main() 
{
    solve();
}