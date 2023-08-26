#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int n;
    cin>>n;
    int ans = 0;

    const int maxn = 2000;
    bitset<maxn> cols[n];

    vector<string> mat(n);
    for(int i=0; i<n; i++){
        cin>>mat[i];
    }
    vector<vector<bool>> matb(n, vector<bool>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) 
            matb[i][j] = mat[i][j] == '1' ;

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            cols[j][i] = mat[i][j] - '0';
        }
    }
    for(int i=0; i<n; i++) 
        for(int j=i+1; j<n; j++){
            if(!matb[i][j]) ans += (cols[i] & cols[j]).any(); 
    }
    cout << ans*2 << endl;
}