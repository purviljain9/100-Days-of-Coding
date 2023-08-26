// Write a Program to concatenate a string.
#include<iostream>
#include<string.h>
using namespace std;
void concatenate(string s1, string s2)
{
    string ans  = s1 + s2;
    cout << ans;
}

int main()
{
    string s1;
    cout << "Enter First String" << endl;
    cin>>s1;

    string s2;
    cout << "Enter Second String" << endl;
    cin>>s2;

    concatenate(s1, s2);
}

//OTHER WAY USING A BUILT-IN FUNCTION(USEFUL AND MORE VALID)
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char s1[100];
//     cout << "Enter First String" << endl;
//     cin>>s1;

//     char s2[100];
//     cout << "Enter Second String" << endl;
//     cin>>s2;

//     string ans = strcat(s1,s2);
//     cout << ans << endl;

//     cout << strcat(s1,s2) << endl;
// }