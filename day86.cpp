// Mahesh got a beautiful array named A as a birthday gift from his beautiful girlfriend Namratha. There are N 
// positive integers in that array. Mahesh loved the array so much that he started to spend a lot of time on it
// everyday. One day, he wrote down all possible subsets of the array. Then for each subset, he calculated the 
// sum of elements in that subset and wrote it down on a paper. Unfortunately, Mahesh lost the beautiful array :(.
// He still has the paper on which he wrote all subset sums. Your task is to rebuild beautiful array A and help 
// the couple stay happy :)
#include<iostream>
#include<math.h>
#include<set>
using namespace std;
void solve()
{
    multiset<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<(int)(pow(2,n)); i++){
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
  
    arr.erase(0);
    while(((int)arr.size() >= 1)){
        int first = *arr.begin();
        auto i = arr.begin();
        i++;
        for(; (i != arr.end()); i++){
            if((arr.find((first) + (*i))) != arr.end()){
                auto j = arr.find((first) + (*i));
                arr.erase(j);
            }
        }
        cout << first << " ";
        arr.erase(arr.begin());
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) 
        solve();
}























// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
//         //cout << n << endl;
// 	    int total = pow(2, n);
//         //cout << total << endl;
// 	    int arr[100];
// 	    for(int i=0; i<total; i++){
// 	        cin>>arr[i];
// 	    }
	    
// 	    for(int i=1; i<=n; i++){
// 	        cout << arr[i] << " ";
// 	    }
//         cout << endl;
	    
// 	}
// 	return 0;
// }
