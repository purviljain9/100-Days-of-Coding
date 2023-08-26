//Write a program to find Sum of N natural numbers Description
//Get the input from the user for the value of n and then find the sum of first n natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << sum << endl;
}