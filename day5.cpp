//Write a program to identify if the number is even or odd

//Get a number as input from the user and check whether the given number is odd or even

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    if(n%2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}