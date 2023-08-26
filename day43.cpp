//Write Program to find the array type
#include<iostream>
using namespace std;
bool oddcheck(int arr[], int n)
{
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            return false;
        }
    }
    return true;
}

bool evencheck(int arr[], int n)
{
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter size of the array" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(oddcheck(arr, n)){
        cout << "ODD" << endl;
    }
    else if(evencheck(arr, n)){
        cout << "EVEN" << endl;
    }
    else{
        cout << "MIXED" << endl;
    }
}