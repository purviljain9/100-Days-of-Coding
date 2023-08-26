//Write Program to find number of even and odd elements in an array
#include<iostream>
using namespace std;
void oddevencount(int arr[], int n)
{
    int evencount = 0;
    int oddcount = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout << "The number of even elements are " << evencount << endl;
    cout << "The number of odd elements are " << oddcount << endl;
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

    oddevencount(arr, n);
}
// pair<int, int> ans;
//     ans.first = evencount;
//     ans.second = oddcount;
//     return ans;