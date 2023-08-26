//Write a program to find the Factors of a number Description
//Get an input from the user and find the factors of the number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i <<" ";
        }
    }
}