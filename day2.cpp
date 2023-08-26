//Take an input character from user and check whether it is an alphabet or not.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character" << endl;
    cin>>ch;
    
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
        cout << "Alphabet" << endl;
    }
    else{
        cout << "Not an alphabet" << endl;
    }
}