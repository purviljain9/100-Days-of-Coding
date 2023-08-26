// Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and 
// print the sum of maximum scalar product (Dot product) of 2 vectors
#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}
int maxscalerproduct(int arr1[], int arr2[], int n)
{
    int product = 0;
    for(int i=0; i<n; i++){
        product = product + (arr1[i]*arr2[i]);
    }
    return product;
}

int main()
{
    int n;
    cout << "Enter the size of the array of both arrays" << endl;
    cin>>n;

    int arr1[100];
    cout << "Enter the elements of the first array" << endl;
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    int arr2[100];
    cout << "Enter the elements of the second array" << endl;
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }

    sort(arr1, n);
    sort(arr2, n);

    cout << maxscalerproduct(arr1, arr2, n) << endl;
}