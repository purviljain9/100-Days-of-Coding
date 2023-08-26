//Write a program to find Factorial of a number Description

//Get a number from user for which you need to fin the factorial, 
//then calculate the factorial and give it as the output.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int fact = 1;
    if(n==0){
        cout << '1' << endl;
    }
    else{
        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
    }
    cout << fact << endl;
}
