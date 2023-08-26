// For a given array B1?,B2?,…,BM? of length at least 3, let's define its weight as the largest value of 
// (Bi?−Bj?)⋅(Bj?−Bk?) over all possible triples (i,j,k) with 1≤i,j,k≤M and i!=j, j!=k, k!=i.
// You are given a sorted array A1?,A2?,…,AN? (that is, A1?≤A2?≤…≤AN?).
// Calculate the sum of weights of all contiguous subarrays of A of length at least 3. That is, count the sum of 
// weights of arrays [Ai?,Ai+1?,…,Aj?] over all 1≤i<j≤N with j−i≥2.
#include<iostream>
#include<algorithm>
using namespace std;
long long int weight(long long int i,long long int j,long long int k)
{
    return (long long int)(j-i)*(k-j);
}
int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin>>n;
    long long int A[n];
    cout << "Enter the elements of array" << endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    long long int sum=0;

    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            long long int k = (A[i]+A[j])/2L;
            auto u = upper_bound(A+i+1,A+j-1,k);
            auto l =u-1;
            sum = sum + max(weight(A[i],*u,A[j]), weight(A[i],*l,A[j]));
        }
    }
    cout << sum << endl;
}