// You have a binary string S of length N. In one operation you can select a substring of S and reverse it. For 
// example, on reversing the substring [2,4]S[2,4] for S=11000, we change 11000→10010.
// Find the minimum number of operations required to sort this binary string.
// It can be proven that the string can always be sorted using the above operation finite number of times.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of string" << endl;
    cin>>n;

    string s;
    cout << "Enter the binary string" << endl;
    cin>>s;

    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1' && s[i+1] == '0'){
            count++;
        }
    }

    cout << count << endl;
}
// ANOTHER APPROACH>>>>>>>>>>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
	    
// 	    string str;
// 	    cin>>str;
	    
// 	    int end = n-1;
// 	    int ans = 0;
	    
// 	    for(int i=n-1;i>0;i--)
// 	    {
// 	        if(str[i-1]>str[i])
// 	        {
//                 ans++;
//                 end--;
// 	        }
// 	    }
	    
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }