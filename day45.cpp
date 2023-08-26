//Write Program to find smallest and largest element in an array
#include<iostream>
using namespace std;
int smallest(int arr[], int n)
{
    int small = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}

int largest(int arr[], int n)
{
    int large = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    return large;
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

    cout << "The smallest number of the array is " <<smallest(arr, n) << endl;
    cout << "The largest number of the array is " <<largest(arr, n) << endl;
}