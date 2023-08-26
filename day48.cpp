//Write Program to remove duplicate elements in an array
#include<iostream>
using namespace std;
int removeduplicate(int arr[], int n)
{
    if(n == 0 || n == 1){
        return n;
    }

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

    n = removeduplicate(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

//brute force approach by taking extra space
// int removeduplicate(int arr[], int n)
// {
//     if(n == 0 || n == 1){
//         return n;
//     }

//     int j=0;
//     int temp[100];

//     for(int i=0; i<n; i++){
//         if(arr[i] != arr[i+1]){
//             temp[j] = arr[i];
//             j++;
//         }
//     }
//     temp[j] = arr[n-1];

//     for(int i=0, j=0; i<j, j<n; i++, j++){
//         arr[i] = temp[j];
//     }

//     return j;
// }