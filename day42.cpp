//Write Program to check if two arrays are the same or not
#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

bool ischeck(int arr1[], int n, int arr2[], int m)
{
    if(n != m){
        return false;
    }
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] != arr2[j]){
            return false;
        }
        else{
            i++;
            j++;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter size of first array" << endl;
    cin>>n;

    int m;
    cout << "Enter size of second array" << endl;
    cin>>m;

    int arr1[100];
    cout << "Enter elements of first array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int arr2[100];
    cout << "Enter elements of second array" << endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    sort(arr1, n);
    sort(arr2, m);

    if(ischeck(arr1,n,arr2,m)){
        cout << "The given arrays are same" << endl;
    }
    else{
        cout << "The given arrays are not same" << endl;
    }
}