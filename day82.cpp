// You are given N binary strings of length N each. You need to find a binary string of length N which is different
// from all of the given strings.
// Note:
// A binary string is defined as a string consisting only of '0' and '1'.
// A string is considered different from another string when they have different lengths, or when they differ in at least one position.
// not understood>>>>>>>>>>>
#include<iostream>
#include<set>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number and length of strings" << endl;
    cin>>n;
    string str = "", str1;
    set <string> a;
    for (int i = 0; i < n; i++){
        cin >> str1;
        if (a.find(str1)==a.end()){
            a.insert(str1);
            cout << "size" << a.size() << endl;
        }
        str += '0';
    }
    for (int j = 0; j <= n; j++){
        if (a.find(str)==a.end()){
            cout << str <<"\n";
            break;
        }
        else{
            str[j] = '1';
        }
    }
}


//ANOTHER APPROACH>>>>>>>>>>>>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         vector<vector<char>>v(n,vector<char>(n));
//         for(int i=0;i<n;i++){
//             string s; cin>>s;
//             for(int j=0;j<s.size();j++){
//                 v[i][j]=s[i];
//             }
//         }
//         string s="";
//         for(int i=0,j=0;i<n,j<n;i++,j++){
//             if(v[i][j]=='0') s+='1';
//             else s+='0';
//         }
//         cout<<s<<"\n";
//     }
//     return 0;
// }