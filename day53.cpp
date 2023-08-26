//Given an integer array of size N. Write Program to find maximum product subarray in a given array
#include<iostream>
using namespace std;
int maximumproduct(int arr[], int n)
{
    int ans = arr[0];
    int maxi = ans;
    int mini = ans;
    for(int i=1; i<n; i++){
        if(arr[i] < 0){
            swap(maxi, mini);
        }
        maxi = max(arr[i], maxi*arr[i]);
        mini = min(arr[i], mini*arr[i]);
        ans = max(ans, maxi);
    }
    return ans;
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
    cout << maximumproduct(arr, n) << endl;
}
// BRUTE FORCE APPROACH
// int maximumproduct(int arr[], int n)
// {
//     int maxi = INT64_MIN;
//     for(int i=0; i<n; i++){
//         int ans = 1;
//         for(int j=i; j<n; j++){
//             ans = ans * arr[j];
//             if(ans > maxi){
//                 maxi = ans;
//             }
//         }
//     }
//     return maxi;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array" << endl;
//     cin>>n;

//     int arr[100];
//     cout << "Enter the elements of the array" << endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout << maximumproduct(arr, n) << endl;
// }