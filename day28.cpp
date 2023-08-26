//Write a Program to reverse a string.
#include<iostream>
using namespace std;
void reversestring(char arr[], int n)
{
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    int i=1;
    while(arr[i]!='\0'){
        i++;
    }

    //OR //FOR CALCULATING THE LENGTH OF CHAR ARRAY>>>>>>>
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }

    reversestring(arr, i);
    cout << arr;
}