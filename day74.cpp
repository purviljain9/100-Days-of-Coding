// You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 2×2 and the other
// of dimensions 1×1. You want to cover the grid using these two types of tiles in such a way that:
// Each cell of the grid is covered by exactly one tile; and The number of 1×1 tiles used is minimized.
// Find the minimum number of 1×1 tiles you have to use to fill the grid.
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of a single line containing two space-separated integers N,M.
// Output Format
// For each test case, print on a new line the minimum number of 1×1 tiles needed to fill the grid.
#include<iostream>
using namespace std;
int minimumtiles(int n, int m)
{
    if(n%2 != 0 && m%2 !=0){
        return (n+m)-1;
    }
    else if(n%2 == 0 && m%2 != 0){
        return n;
    } 
    else if(n%2 != 0 && m%2 == 0){
        return m;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,m;
    cout << "Enter the rows and columns of the 2d array" << endl;
    cin>>n>>m;

    if(n == 1 && m == 1){
        cout << '1' << endl;
    }
    else{
        cout << minimumtiles(n, m) << endl;
    }
}