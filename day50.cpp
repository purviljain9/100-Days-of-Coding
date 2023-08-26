// Given an integer array of size N. Write Program to find sum of positive 
// square elements in the array
#include<iostream>
#include<math.h>
using namespace std;
int sort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}
int removeduplicate(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[n-1];
    return j;
}
int squaresum(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + pow(arr[i], 2);
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            arr[i] = arr[i]*-1;
        }
    }
    sort(arr, n);

    n = removeduplicate(arr, n);

    cout << squaresum(arr, n) << endl;
}