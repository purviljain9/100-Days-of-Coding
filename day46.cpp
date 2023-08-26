//Write Program to find sum of elements in an array
#include<iostream>
using namespace std;
int sum(int arr[], int n) 
{
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << "The sum of all the elements present in array is " << sum(arr, n) << endl;

}