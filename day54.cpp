// Given an integer array of size N. Write Program to find whether Arrays are disjoint or not.
#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
bool checkdisjoint(int arr1[], int arr2[], int n, int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            i++;
        } 
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout <<"Enter the size of first array" << endl;
    cin>>n;

    int arr1[100];
    cout <<"Enter the elements of first array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cout <<"Enter the size of first array" << endl;
    cin>>m;

    int arr2[100];
    cout <<"Enter the elements of first array" << endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    sort(arr1, n);
    sort(arr2, m);

    if(checkdisjoint(arr1, arr2, n, m)){
        cout << "Disjoint" << endl;
    }
    else{
        cout << "Not Disjoint" << endl;
    }
}
//BURTE FORCE APPROACH>>>>>>>>>>>>>>>>>>>>>>>
// bool checkdisjoint(int arr1[], int n, int  arr2[], int m)
// {
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr1[i] == arr2[j]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout <<"Enter the size of first array" << endl;
//     cin>>n;

//     int arr1[100];
//     cout <<"Enter the elements of first array" << endl;
//     for(int i=0; i<n; i++){
//         cin>>arr1[i];
//     }

//     int m;
//     cout <<"Enter the size of first array" << endl;
//     cin>>m;

//     int arr2[100];
//     cout <<"Enter the elements of first array" << endl;
//     for(int i=0; i<m; i++){
//         cin>>arr2[i];
//     }

//     if(checkdisjoint(arr1, n, arr2, m)){
//         cout << "Disjoint" << endl;
//     }
//     else{
//         cout << "Not Disjoint" << endl;
//     }
// }