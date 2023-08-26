//Write a program to identify if the number is Strong number or not Description
//Get a number as input from user and then check whether that number is a strong number or not. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int num = n;
    int sum = 0;
    int fact= 1;
    while(n!=0){
        int digit = n%10;
        for(int i=1; i<=digit; i++){
            fact = fact*i;
        }
        sum =sum+fact;
        fact = 1;
        n = n/10;
    }
    if(sum == num){
        cout << "Strong number" << endl;
    }
    else{
        cout << "Not a strong number" << endl;
    }
}