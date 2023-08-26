// Alice and Bob went to a pet store. There are N animals in the store where the ith animal is of type Ai?.
// Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left in the store 
// after Alice has made the purchase.Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of inputs" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    if(n%2 != 0)
        cout << "NO" << endl;
    else{
        sort(arr, arr+n);
        int i;
        for(i=0; i<n; i+=2){
            if(arr[i] != arr[i+1]){
                cout << "NO" << endl;
                break;
            }
        }
        if(i == n){
            cout << "YES" << endl;
        }
    }
}




// MY APPROACH(Wrong)
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
// 	while(t--){
// 	    int n;
//         cin>>n;

//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
    
//         if(n%2 != 0){
//             cout << "NO" << endl;
//         }
//         else{
//             int sum1 = 0;
//             for(int i=0; i<n/2; i++){
//                 sum1 = sum1 + arr[i];
//             }
    
//             int sum2 = 0;
//             for(int i=n/2; i<n; i++){
//                 sum2 = sum2 + arr[i];
//             }
    
//             if(sum1 == sum2){
//                 cout << "YES" << endl;
//             }
//             else{
//                 cout << "NO" << endl;
//             }
//         }
// 	}
// 	return 0;
// }



//-------------------------------------------------------------
// int sum = 0;
//         for(int i=0; i<n; i++){
//             sum = sum + arr[i];
//         }

//         int sum1 = 0;
//         int sum2 = 0;
//         for(int i=0; i<n; i++){
//             if(sum1 >= sum/2){
//                 sum2 = sum2 + arr[i];
//             }
//             else{
//                 sum1 = sum1 + arr[i];
//             }
//         }