//Write a Program to Toggle each character in a string
#include<iostream>
using namespace std;
void toggle(char arr[])
{
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
            i++;
        }
        else{
            arr[i] = arr[i] - 'A' + 'a';
            i++;
        }
    }
}

int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    toggle(arr);
    cout << arr << endl;
}