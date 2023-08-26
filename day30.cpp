//Write a Program to print Length of the string without using strlen() function
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout << "Enter a String" << endl;
    cin>>s;

    int count = 0;
    int i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    cout << "Length of the String is " << count << endl;
}

//USING BUILT-IN FUNCTION>>>>>>>>>
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char s[100];
//     cout << "Enter a String" << endl;
//     cin>>s;

//     cout << strlen(s) << endl;
// }