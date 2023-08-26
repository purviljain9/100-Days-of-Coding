// Bucket Filling
// Nejiya has a bucket having a capacity of K liters. It is already filled with X liters of water.
// Find the maximum amount of extra water in liters that Nejiya can fill in the bucket
// without overflowing.
// Input Format
// The first line will contain T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space separated integers K and X
// as mentioned in the problem.
// Output Format
// For each test case, output in a single line, the amount of extra water in liters that 
// Nejiya can fill in the bucket without overflowing.

#include<iostream>
using namespace std;
int extrawater(int k, int x)
{
    int maxwater = k - x;
    return maxwater;
}

int main()
{
    int k;
    int x;
    cout << "Enter the total capacity and water filled in bucket" << endl;
    cin>>k>>x;

    cout << extrawater(k, x) << endl;
}