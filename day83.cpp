// Given a complete binary tree with the height of H, we index the nodes respectively top-down and left-right 
// from 1. The i-th node stores a positive integer Vi. Define Pi as follows: Pi=Vi if the i-th node is a leaf, 
// otherwise Pi=max(Vi*PL, Vi*PR), where L and R are the indices of the left and right children of i, respectively. 
// Your task is to caculate the value of P1.
#include<iostream>
using namespace std;
#define q 1000000007
int main()
{
    long long int t,n,i,j;
    cin>>n;
    
    long long int a[n+1];
    double b[n+1];
    for(i=1; i<=n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    for(i=n/2; i>0; i--){
        if(b[(2*i) + 1] > b[2*i]){
            a[i] = a[i] * a[(2*i) + 1];
            b[i] = b[i] * b[(2*i) + 1];
        }
        else{
            a[i] = (a[i] * a[2*i]);
            b[i] = (b[i] * b[2*i]);
        }
        a[i] %= q;
    }
    cout << a[1] << endl;
} 





















// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// #define G 1000000007
// typedef long long ll;
// typedef long double ld;
// typedef vector<int> vi;
// typedef vector<char> vc;
// typedef pair<int,int> pii;
// typedef vector<pii> vii;
// int main() 
// {
//     ios_base::sync_with_stdio(false);  
//     cin.tie(NULL);
//     int t=1;
//     while (t){
//         int h; cin >> h;
//         if (h==0) break;
        
//         int n = pow(2,h)-1;
//         vector<double> a(n+1);
//         vector<ll> b(n+1);
//         for (int i=1; i<=n; i++){
//             cin >> a[i];
//             b[i] = a[i];
//         }
        
//         for (int j=h-2; j>=0; j--){
//             for (int i=pow(2,j); i<pow(2,j+1); i++){
//                 a[i] = (a[i] * ((a[2*i]>a[2*i+1])? a[2*i]:a[2*i+1]));
//                 b[i] = (b[i] * ((a[2*i]>a[2*i+1])? b[2*i]:b[2*i+1]))%G;
//             }
//         }
//         cout << b[1] << endl;
//     }
// 	return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 1000000007;

// int calculate_P1(int H, const vector<int>& values, int index) {
//     if (index > (1 << H) - 1) {
//         return values[index - 1];
//     }
    
//     int left_child = 2 * index;
//     int right_child = 2 * index + 1;
    
//     int PL = calculate_P1(H, values, left_child);
//     int PR = calculate_P1(H, values, right_child);
    
//     return max(values[index - 1] * PL, values[index - 1] * PR);
// }

// int main() {
//     while (true) {
//         int H;
//         cin >> H;
//         if (H == 0) {
//             break;
//         }
        
//         vector<int> values((1 << H) - 1);
//         for (int i = 0; i < (1 << H) - 1; i++) {
//             cin >> values[i];
//         }
        
//         int result = calculate_P1(H, values, 1) % MOD;
//         cout << result << endl;
//     }
    
//     return 0;
// }


























// #include<bits/stdc++.h>
// using namespace std;
// #define q 1000000007
// int main()
// {
//     long long int t,n,i,j;
//     cin>>t;
//     while(t!=0){
//         n=(1<<t) - 1;

//         long long int a[n+1];
//         double b[n+1];
//         for(i=1;i<=n;i++){
//             cin>>a[i];b[i]=a[i];
//         }

//         for(i=n/2;i>0;i--){
//             if(b[2*i +1]>b[2*i]){a[i]=a[i]*a[2*i+1];b[i]=b[i]*b[2*i+1];
//         }
//         else{
//             a[i]=(a[i]*a[2*i]);b[i]=(b[i]*b[2*i]);
//         }
//         a[i]%=q;
//         }
//         cout<<a[1]<<endl;
//         cin>>t;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define q 1000000007
// int main()
// {
//  long long int t,n,i,j;
//  cin>>t;
//  while(t!=0)
//  {
//  n=(1<<t) - 1;

//  long long int a[n+1];
//  double b[n+1];
//  for(i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}

//  for(i=n/2;i>0;i--)
//  {
//  if(b[2*i +1]>b[2*i]){a[i]=a[i]*a[2*i+1];b[i]=b[i]*b[2*i+1];}
//  else {a[i]=(a[i]*a[2*i]);b[i]=(b[i]*b[2*i]);}

//  a[i]%=q;

//  }
//  cout<<a[1]<<endl;
//  cin>>t;
//  }
//  return 0;
// }