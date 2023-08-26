// You are given an array A of N elements. For any ordered triplet (i,j,k) such that i, j, and k are pairwise 
// distinct and 1≤i,j,k≤N, the value of this triplet is (Ai?−Aj?)⋅Ak?. You need to find the maximum value among 
// all possible ordered triplets.Note: Two ordered triplets (a,b,c) and (d,e,f) are only equal when a=d and b=e 
// and c=f. As an example, (1,2,3) and (2,3,1) are two different ordered triplets.
// Input Format
// The first line of the input contains a single integer T - the number of test cases. The test cases then follow.
// The first line of each test case contains an integer N.
// The second line of each test case contains N space-separated integers A1?,A2?,…,AN?.
// Output Format
// For each test case, output the maximum value among all different ordered triplets.
#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
	int n;
    cout << "Enter the number of elements" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    long long ans = (arr[n-1] - arr[0])*arr[n-2];
    cout << ans << endl;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of elements" << endl;
//     cin>>n;

//     int arr[100];
//     cout << "Enter the elements of the array" << endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int maxi = 0;
//     int ans1 = 0;
//     int ans2 = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             // if(j == n){
//             //     j=0;
//             // }
//             for(int k=j+1; k<n; k++){
//                 // if(k == n){
//                 //     k=0;
//                 // }
//                 ans1 = (arr[i]-arr[j])*arr[k];
//                 cout << "ans1 " << ans1 << endl;
//                 swap(arr[j], arr[k]);
//                 ans2 = (arr[i]-arr[j])*arr[k];
//                 cout << "ans2 " << ans2 << endl;
//                 int temp = max(ans1, ans2);
//                 if(temp > maxi){
//                     maxi = temp;
//                 }
//                 swap(arr[j], arr[k]);
//             }
//         }
//     }
//     cout << maxi << endl;
// }
