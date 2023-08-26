//Write a Program to print Non-repeating characters in a string
#include<iostream>
#include<string.h>
using namespace std;
void norepeat(char arr[])
{
    string s;
    for(int i=0; i<strlen(arr); i++){
        int count = 0;
        for(int j=0; j<strlen(arr); j++){
            if(i>j && arr[i] == arr[j]){
                break;
            }
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            s.push_back(arr[i]);
        }
    }
    cout << s << endl;
}
int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    norepeat(arr);
}