// Write Program to find whether the numbers of an array be made equal
#include<iostream>
using namespace std;
bool makeequal(int arr[], int n)
{
    for(int i=0; i<n; i++){

        while(arr[i]%2 == 0){
            arr[i] = arr[i]/2;
        }
        while(arr[i]%3 == 0){
            arr[i] = arr[i]/3;
        }
        if(arr[i] != arr[0]){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements if the array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(makeequal(arr, n)){
        cout << "Yes, the numbers can be made equal" << endl;
    }
    else{
        cout << "No, the numbers cannot be made equal" << endl;
    }
}