//Write a program to Replace all 0’s with 1 in a given integer

//ADD CONDITION FOR HANDLING ZERO CONDITION>>>>>>>>>>>>

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int sum = 0;
    int i = 1;
    while(n!=0){
        int digit = n%10;
        if(digit==0){
            digit = 1;
        }
        sum = sum + digit*i;
        i = i*10;
        n = n/10;
    }
    cout << sum << endl;
}