//Write a program to identify if the number is Perfect number or not Description
//Get the input from the user and check whether that number is a perfect number or not.
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter a Number" << endl;
    cin>>n;
    
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum==n){
        cout << "Perfect Number" << endl;
    }
    else{
        cout << "Not a Perfect Number" << endl;
    }
}