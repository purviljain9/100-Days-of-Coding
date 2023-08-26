//Write a program to express a number as a sum of two prime numbers Description
#include <iostream>
using namespace std;
int sumprimes(int n){
    int isPrime = 1;
    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int sig = 0;
    for(int i = 2; i <= n/2; i++){
        if(sumprimes(i) == 1){
            if(sumprimes(n-i) == 1){
                cout << n << " can be expressed as the sum of " << i << " and " << n-i;
                sig = 1;
            }
        }
    }
    if(sig == 0){
        cout << n << " cannot be expressed as the sum of two primes" << endl;
    }
}