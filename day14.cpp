//Write a program to reverse a given number Description
//Get an input from the user and the print the reverse of the given number as the output
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int num = 0;
    while(n!=0){
        num = n%10;
        cout << num;
        n = n/10;
    }
}
