// In this problem you will have to implement a simple editor. The editor maintains the content of a string S and
// have two following functions.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int q;
    cout << "Enter the number of queries" << endl;
    cin>>q;
    string s = "";
    for(int i=0; i<q; i++){
        char c;
        int n;
        string s1 = "";
        cout << "Enter the character index and string" << endl;
        cin>>c>>n>>s1;
        if(c == '+'){
            if(s.empty()){
                s = s+s1;
            }
            else{
                s.insert(i,s1);
            }
        }
        else{
            cout << endl;
            cout << s.substr(n-1,stoi(s1)) << endl;
            cout << endl;
        }
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// long n;
// cin>>n;
// string s="";
// while(n--){
//  char ch;
//  int i;
//  string str;
//  cin>>ch>>i>>str;
//  if(ch=='+'){
//  if(i==0){
//  s=str+s;
//  }
//  else{
//  s.insert(i,str);

//  }
//  }
//  else{
//  cout<<s.substr(i-1,stoi(str))<<endl;
//  }
// }
// return 0;
// }