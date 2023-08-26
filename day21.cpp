//Write a program to identify if the number is Palindrome or not Description
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int copy = n;
    int count = -1;
    while(n!=0){
        n=n/10;
        count++;
    }

    int sum = 0;
    int copy2 = copy;    
    while(copy!=0){
        int digit = copy%10;
        sum = sum + digit*pow(10, count);
        count--;
        copy = copy/10;
    }
    if(copy2==sum){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }
}