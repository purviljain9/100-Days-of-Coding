//Write a program to identify if the number is Prime number or not Description
//Get a number as input from the user and check whether that number is prime or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int count = 0;
    if(n==0 || n==1){
        cout << n << " is not a prime number" << endl; 
    }
    else{
        for(int i = 1; i<=n; i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            cout << n << " is a prime number" << endl;
        }
        else{
            cout << n << " is not a prime number" << endl;
        }
    }
}















// bool prime(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         prime(n); 
//     }
//     return 0;

// }

// int main()
// {
//     int n = 3;
//     prime(n);
//     if(true){
//         cout << "prime" << endl;
//     }
//     else{
//         cout << "not prime" << endl;
//     }
// }