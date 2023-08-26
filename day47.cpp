//Write Program to find longest palindrome in an array
#include<iostream>
using namespace std;
int checkpalindrome(int n)
{
    int num = 0;
    int temp = n;
    while(temp!=0){
        int digit = temp%10;
        num = digit + 10*num;
        temp = temp/10;
    }

    if(num == n){
        return 1;
    }
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

    int ans = -1;

    for(int i=0; i<n; i++){
        if(checkpalindrome(arr[i]) == 1 && ans<arr[i]){
            ans = arr[i];
        }
    }
    if(ans == -1){
        ans = -1;
    }

    cout << ans << endl;
}

//second method is by using sorting the array
// #include<iostream>
// using namespace std;
// int checkpalindrome(int n)
// {
//     int num = 0;
//     int temp = n;
//     while(temp!=0){
//         int digit = temp%10;
//         num = digit + 10*num;
//         temp = temp/10;
//     }
//     cout << "num" << num << endl;
//     cout << "n" << n << endl;

//     if(num == n){
//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the array" << endl;
//     cin>>n;

//     int arr[100];
//     cout << "Enter the elements of the array" << endl;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans = -1;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[i]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     for(int i=n-1; i>=0; i--){
//         if(checkpalindrome(arr[i]) == 1 && ans<arr[i]){
//             ans = arr[i];
//             break;
//         }
//     }
//     if(ans == -1){
//         ans = -1;
//     }

//     cout << ans << endl;
// }