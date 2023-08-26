//Write a program to find Fibonacci series up to n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin>>n;

    int f1 = 0;
    int f2 = 1;

    if(n == 1){
        cout << f1 << endl;
    }
    else if(n == 2){
        cout << f1 <<" "<< f2 << endl;
    }
    else{
        cout << f1 <<" "<< f2<<" ";
        for(int i = 1; i<n-1; i++){
            int f3 = f1+f2;
            f1 = f2;
            f2 = f3;
            cout << f3 <<" ";
        }
    }
}