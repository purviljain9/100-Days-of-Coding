//Write a Program to Remove vowels from a string

//TRY TO SOLVE IT WITHOUT THE EXTRS SPACE
#include<iostream>
using namespace std;
void removevowels(string s)
{
    string ans;
    int i=0;
    while(s[i]!='\0'){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'
           && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'){
            ans.push_back(s[i]);
            i++;
        }
        else{
            i++;
        }
    }
    cout << ans << endl;
}

int main()
{
    string s;
    cout << "Enter a String" << endl;
    cin>>s;

    removevowels(s);                   
}