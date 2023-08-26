// Given an integer array of size N, write a program to sort the array
// Bubble sort
#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    
    sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}