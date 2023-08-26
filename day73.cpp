// // A string is called boring if all the characters of the string are same.
// // You are given a string S of length N, consisting of lowercase english alphabets. Find the length of the 
// // longest boring substring of S which occurs more than once.
// // Note that if there is no boring substring which occurs more than once in S, the answer will be 00.
// // A substring is obtained by deleting some (possibly zero) elements from the beginning of the string and some 
// // (possibly zero) elements from the end of the string.
#include <iostream>
#include<unordered_set>
using namespace std;
#define st unordered_set
int main() 
{
    int n;
    cout << "Enter the length of the string" << endl;
    cin>>n;
    string str;
    cout << "Enter the string" << endl;
    cin>>str;
    string res = "";
    st<string>s;
    res=str[0];
    int l,mx,sum;
    l=mx=0;
    sum=1;
    for(int i=1; i<n; i++){
        if(str[i-1]!=str[i]){
            if(mx<sum){
                mx = sum;
                mx--;
            }
            if(s.find(res)!=s.end()){
                l = max(l, sum);
                s.insert(res);
                res = str[i];
                sum=1;
            }
        }
        else{
        sum++;
        res+=str[i];
        }
    }
    if(s.find(res)!=s.end()){
        l = max(l, sum);
    }
    else{
        if(mx<sum){
            mx = sum;
            mx--;
        }
    }
    int ans = max(l, mx);
    cout<<ans<<endl;
}