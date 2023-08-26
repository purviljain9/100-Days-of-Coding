// Given an array, rotate the array by one position in clock-wise direction.
#include<iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
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

    rotate(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}