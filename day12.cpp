//Write a program to find Sum of digits of a number Description
//Get a number from user and then find the sum of the digits in the given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin>>n;

    int a = 0;
    while(n!=0){
        a = a + (n%10);
        n = n/10;
    }
    cout << a << endl;
}