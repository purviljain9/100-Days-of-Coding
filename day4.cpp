//Write a program to identify of the a number is positive or negative Description

//Get an input number from the user and check whether it is a positive or negative number.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    if(n>0){
        cout << "Positive number" << endl;
    }
    else if(n == 0){
        cout << "Neither positive nor negative" << endl;
    }
    else{
        cout << "Negative number" << endl;
    }
}