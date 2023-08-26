// Write a Program to Remove brackets from an algebraic expression
#include<iostream>
using namespace std;
void remove(string s)
{
    int i = 0;
    string ans;
    while(i != s.length()){
        if(s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '[' || s[i] == ']'){
            i++;
        }
        else{
            ans.push_back(s[i]);
            i++;
        }
    }
    cout << ans << endl;
}

int main()
{
    string s;
    cout << "Enter a algebraic expression" << endl;
    cin>>s;

    remove(s);
}