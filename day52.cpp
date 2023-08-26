// Given an integer array of size N, write a program to reverse the array
#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr, n);
    
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    } 
}