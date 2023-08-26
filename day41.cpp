// Check if two strings match where one string contains wildcard characters
#include<iostream>
using namespace std;
bool check(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return true;
    if (*s1 == '*' && *(s1+1) != '\0' && *s2 == '\0')
        return false;
    if (*s1 == '?' || *s1 == *s2)
        return check(s1+1, s2+1);
    if (*s1 == '*')
        return check(s1+1, s2) || check(s1, s2+1);
    return false;
}
int main()
{
    char s1[100];
    char s2[100];

    cout<< "Enter first string with wild characters" << endl;
    cin>>s1;
    cout<< "Enter second string without wild characters" << endl;
    cin>>s2;

    if(check(s1,s2)){
        cout << "Yes they match" << endl;
    }
    else{
        cout << "No they don't match" << endl;
    }
}